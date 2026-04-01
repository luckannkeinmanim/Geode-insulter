#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto myLabel = CCLabelBMFont::create("Mobile Mod Active!", "bigFont.fnt");
        auto winSize = CCDirector::get()->getWinSize();
        
        myLabel->setPosition({ winSize.width / 2, winSize.height - 50 });
        myLabel->setID("my-label");
        
        this->addChild(myLabel);
        return true;
    }
};
