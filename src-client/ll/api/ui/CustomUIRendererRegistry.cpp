#include "ll/api/ui/CustomUIRendererRegistry.h"

#include <shared_mutex>
#include <unordered_map>
#include <unordered_set>

#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"

#include "mc/client/gui/UIDefType.h"
#include "mc/client/gui/UIResolvedDef.h"
#include "mc/client/gui/controls/CustomRenderComponent.h"
#include "mc/client/gui/controls/UIControl.h"
#include "mc/client/gui/controls/UIControlFactory.h"
#include "mc/client/gui/controls/renderers/UICustomRenderer.h"

namespace ll::ui {

namespace {

std::shared_mutex                                                  sMutex;
std::unordered_map<std::string, CustomUIRendererRegistry::Factory> sFactories;

std::unordered_set<std::string_view> const sVanillaRendererNames = {
    "hotbar_renderer",
    "hotbar_cooldown_renderer",
    "flying_item_renderer",
    "heart_renderer",
    "horse_heart_renderer",
    "armor_renderer",
    "horse_jump_renderer",
    "dash_renderer",
    "locator_bar",
    "hunger_renderer",
    "bubbles_renderer",
    "vignette_renderer",
    "cursor_renderer",
    "progress_indicator_renderer",
    "mob_effects_renderer",
    "camera_renderer",
    "hud_player_renderer",
    "equipment_preview_renderer",
    "gradient_renderer",
    "panorama_renderer",
    "3d_structure_renderer",
    "bohr_model_renderer",
    "web_view_renderer",
    "actor_portrait_renderer",
    "animated_gif_renderer",
    "banner_pattern_renderer",
    "credits_renderer",
    "qr_code_renderer",
    "profile_image_renderer",
    "editor_gizmo_renderer",
    "editor_volume_highlight_renderer",
    "editor_compass_renderer",
    "bundle_tooltip_renderer",
};

CustomRenderComponent* findCustomRenderComponent(UIControl& control) {
    auto* vtbl = CustomRenderComponent::$vftable();
    for (auto& component : control.mComponents.get()) {
        if (*reinterpret_cast<void***>(component.get()) == vtbl) {
            return static_cast<CustomRenderComponent*>(component.get());
        }
    }
    return nullptr;
}

} // namespace

LL_TYPE_INSTANCE_HOOK(
    CreateFromResolvedDefHook,
    memory::HookPriority::Highest,
    UIControlFactory,
    &UIControlFactory::_createFromResolvedDef,
    std::shared_ptr<UIControl>,
    UIControlFactoryContext const& context,
    UIResolvedDef const&           resolvedDef,
    UIControl*                     parentControl,
    ControlScreenAction&           controlScreenAction,
    ::ui::ChildInsertPosition      childInsertPosition,
    bool                           isTemplateControl
) {
    auto control =
        origin(context, resolvedDef, parentControl, controlScreenAction, childInsertPosition, isTemplateControl);
    if (!control || resolvedDef.getDefType() != UIDefType::Custom) {
        return control;
    }
    auto                              rendererName = resolvedDef.getAsString("renderer", "");
    CustomUIRendererRegistry::Factory factory;
    {
        std::shared_lock lock(sMutex);
        auto             it = sFactories.find(rendererName);
        if (it == sFactories.end()) {
            return control; // not ours; vanilla already logged "Unrecognized renderer"
        }
        factory = it->second;
    }
    if (!factory) {
        return control;
    }
    auto renderer = factory();
    if (!renderer) {
        getLogger().warn("CustomUIRendererRegistry: factory for '{}' returned null", rendererName);
        return control;
    }
    if (auto* component = findCustomRenderComponent(*control)) {
        component->setRenderer(renderer);
    } else {
        static std::unordered_set<std::string> sLoggedFail;
        if (sLoggedFail.insert(rendererName).second) {
            getLogger().warn("CustomUIRendererRegistry: CustomRenderComponent not found for '{}'", rendererName);
        }
    }
    return control;
}

Expected<> CustomUIRendererRegistry::registerRenderer(std::string name, Factory factory) {
    if (name.empty()) {
        return makeStringError("renderer name must not be empty");
    }
    if (!factory) {
        return makeStringError("renderer factory must not be empty");
    }
    if (sVanillaRendererNames.contains(name)) {
        return makeStringError("renderer name '" + name + "' conflicts with a vanilla renderer");
    }
    {
        std::unique_lock lock(sMutex);
        if (!sFactories.try_emplace(std::move(name), std::move(factory)).second) {
            return makeStringError("renderer name is already registered");
        }
    }
    memory::HookRegistrar<CreateFromResolvedDefHook>::hook();
    return {};
}

Expected<> CustomUIRendererRegistry::registerRenderer(std::string name, std::shared_ptr<UICustomRenderer> prototype) {
    if (!prototype) {
        return makeStringError("renderer prototype must not be null");
    }
    return registerRenderer(std::move(name), [prototype = std::move(prototype)] { return prototype->clone(); });
}

bool CustomUIRendererRegistry::unregisterRenderer(std::string_view name) {
    std::unique_lock lock(sMutex);
    auto             it = sFactories.find(std::string{name});
    if (it == sFactories.end()) {
        return false;
    }
    sFactories.erase(it);
    return true;
}

bool CustomUIRendererRegistry::isRegistered(std::string_view name) {
    std::shared_lock lock(sMutex);
    return sFactories.contains(std::string{name});
}

} // namespace ll::ui
