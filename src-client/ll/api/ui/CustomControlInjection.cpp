#include "ll/api/ui/CustomControlInjection.h"

#include "mc/client/gui/ChildInsertPosition.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/controls/UIControl.h"
#include "mc/client/gui/controls/UIControlFactory.h"
#include "mc/client/gui/controls/UIControlFactoryContext.h"
#include "mc/client/gui/controls/VisualTree.h"
#include "mc/client/gui/screens/ScreenView.h"
#include "mc/client/gui/screens/UIScene.h"

namespace ll::ui {

namespace {

std::shared_ptr<UIControl> findControlByName(std::shared_ptr<UIControl> const& control, std::string_view name) {
    if (!control) {
        return nullptr;
    }
    if (control->mName.get() == name) {
        return control;
    }
    for (auto const& child : control->mChildren.get()) {
        if (auto found = findControlByName(child, name)) {
            return found;
        }
    }
    return nullptr;
}

} // namespace

Expected<std::shared_ptr<UIControl>>
attachCustomControl(UIScene& scene, std::string_view parentControlName, std::string const& defName) {
    if (!scene.mScreenView || !scene.mScreenView->mVisualTree) {
        return makeStringError("scene has no visual tree");
    }
    auto const& root = scene.mScreenView->mVisualTree->mRootControl;
    if (!root) {
        return makeStringError("scene's visual tree has no root control (controls not created yet)");
    }
    auto parent = findControlByName(root, parentControlName);
    if (!parent) {
        std::string children;
        for (auto const& child : root->mChildren.get()) {
            if (!children.empty()) children += ", ";
            children += child ? child->mName.get() : "<null>";
        }
        return makeStringError(
            "parent control not found: " + std::string{parentControlName} + " (root='" + root->mName.get()
            + "', children=[" + children + "])"
        );
    }
    auto const& factory = scene.mScreenView->mControlFactory;
    if (!factory) {
        return makeStringError("scene has no control factory");
    }
    UIControlFactoryContext context;
    auto control = factory->_createControlTreeRootOnly(context, defName, parent->mControlScreenAction);
    if (!control) {
        return makeStringError("failed to create control tree: " + defName);
    }
    parent->addChild(control, ::ui::ChildInsertPosition::Back);
    // UIControl::addChild only maintains the parent/child link; rebuild the visual tree's
    // collections/bindings from the root so the new control takes effect immediately.
    auto& tree = scene.mScreenView->mVisualTree;
    tree->$updateControlCollectionFromRoot();
    tree->$updateBindsFromRoot();
    tree->$addDirtyFlag(::ui::DirtyFlag::All);
    tree->$addDirtyFlag(::ui::DirtyFlag::LayoutChanged);
    scene.mScreenView->_handleDirtyVisualTree(/*overrideFocusControl=*/false, /*doAllBinds=*/true);
    return control;
}

} // namespace ll::ui
