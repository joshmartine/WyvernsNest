#include "combat.hpp"

Combat::Combat(): text("res/test_font.ttf", 48, Vec2<int>(Core::windowWidth(), Core::windowHeight())) { }

Combat::~Combat() {

}

void Combat::handleEvent(const SDL_Event& e) {
	if (e.type == SDL_KEYDOWN) {
		if (e.key.keysym.sym == SDLK_SPACE) {
			// Do something when space is pressed
		}
	}
}

void Combat::update(int delta) {
	// Update shit here
}

void Combat::render() {

	// SAMPLE CODE
	Core::Renderer::drawLine(ScreenCoord(0, 0), ScreenCoord(100, 100), Colour(0.0, 1.0, 0.0));
	Sprite sprite("res/test.png");
	sprite.setPos(100, 100);
	sprite.setSize(200, 200);
	sprite.render();

	text.render("hello world", ScreenCoord(50,50), Vec3<float>(1, 1, 1), Text::hAlign::left, Text::vAlign::bottom);
}
