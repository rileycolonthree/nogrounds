#include <Geode/modify/MenuLayer.hpp>
class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;
        auto bottomMenu = this->getChildByID("bottom-menu");
        bottomMenu->getChildByID("newgrounds-button")->setVisible(false);
        bottomMenu->removeChildByID("newgrounds-button");
        bottomMenu->updateLayout();
        return true;
    }
};