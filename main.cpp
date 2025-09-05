#include <SFML/Graphics.hpp>
using namespace std;

int main() {

    auto window = sf::RenderWindow(sf::VideoMode({640u, 440u}), "SFML Project");

    // Loop de execução.
    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        // Limpar buffer de ví­deo antes de usar.
        window.clear(sf::Color{ 0x343434FF });
        
        // Exibir imagem atualizada.
        window.display();
    }

    return 0;
}
