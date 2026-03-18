using namespace geode::prelude;

#include <Geode/modify/CreatorLayer.hpp>
class $modify(MyCreatorLayer, CreatorLayer) {
	bool init() {
		if (!CreatorLayer::init()) {
			return false;
		}

		auto menu = this->getChildByID("creator-buttons-menu");
	    
	    auto listBtn = menu->getChildByID("lists-button");

		listBtn->setVisible(false);

		menu->updateLayout();

		return true;
	}
};
