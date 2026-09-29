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
    // UIControl::addChild 只维护父子关系，不会注册进场景树。
    // 直接让 VisualTree 从根全量重建集合/绑定并同步处理脏树：
    // 分类器会对整棵树重新分类（含 CustomRenderComponent 的控件进入
    // ScreenView::mCustomRendererControls），新控件立即生效并完成布局
    auto& tree = scene.mScreenView->mVisualTree;
    tree->$updateControlCollectionFromRoot();
    tree->$updateBindsFromRoot();
    tree->$addDirtyFlag(::ui::DirtyFlag::All);
    tree->$addDirtyFlag(::ui::DirtyFlag::LayoutChanged);
    scene.mScreenView->_handleDirtyVisualTree(/*overrideFocusControl=*/false, /*doAllBinds=*/true);
    return control;
}

} // namespace ll::ui
