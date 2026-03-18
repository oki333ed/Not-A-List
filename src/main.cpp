using namespace geode::prelude;

#include <Geode/modify/CreatorLayer.hpp>
class $modify(CreatorLayer) {
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

#include <Geode/modify/LevelSearchLayer.hpp>
class $modify(LevelSearchLayer) {
	bool init() {
		if (!LevelSearchLayer::init(int type)) {
			return false;
		}

		auto menu = this->getChildByID("other-filter-menu");
	    
	    auto listBtn = menu->getChildByID("lists-button");

		listBtn->setVisible(false);

		menu->updateLayout();

		return true;
	}
};
