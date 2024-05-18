#include <Geode/modify/MenuLayer.hpp>

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init())
            return false;

        auto bottomMenu = this->getChildByID("bottom-menu");
        auto newgroundsButton = bottomMenu->getChildByID("newgrounds-button");

        newgroundsButton->setVisible(false);
        bottomMenu->removeChildByID("newgrounds-button");
        bottomMenu->updateLayout();

        return true;
    }
};