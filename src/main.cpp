#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            log::info("Не удалось запустить MenuLayer");
            return false;
        }

        auto glView = CCEGLView::get();
        if (glView) {
            auto winSize = CCDirector::get()->getWinSize();
            glView->setDesignResolutionSize(winSize.width, winSize.height, ResolutionPolicy::ExactFit);
            log::info("Экран успешно растянут!");
        }

        return true;
    }
};
