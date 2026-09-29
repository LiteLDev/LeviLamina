#include "ll/api/ui/CustomUIRendererRegistry.h"

#include <bit>
#include <cstdint>
#include <shared_mutex>
#include <unordered_map>
#include <unordered_set>

#include "ll/api/memory/Hook.h"
#include "ll/api/memory/Signature.h"
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

// Hardcoded renderer names inside UIControlFactory::_createFromResolvedDef.
// Registering one of these would silently never fire (the vanilla branch wins),
// so they are rejected up front.
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

// Real game environments ship no PDB, so both anchors below are located by byte
// signatures (unique in the whole .text section of 1.26.51) instead of symbols.
// A failed scan is safe: resolve() returns nullptr and the registry never injects.

// Primary: the vftable pointer, equivalent to CustomRenderComponent::$vftable()
// (which is MCNAPI and can be used directly once whitelisted). Extracted from the
// lea that loads the vftable address at the component creation site inside
// UIControlFactory::_createFromResolvedDef:
//   mov dword [rsi+0x1c], 0x3f800000
//   lea rax, [rip+disp32]     ; <- the vftable address
//   mov [rsi], rax            ; store vftable into the new object
//   pxor xmm0, xmm0 / movdqu [rsi+0x20], xmm0
void** customRenderComponentVtable() {
    static void** vtbl = []() -> void** {
        using namespace ll::literals;
        auto* match = static_cast<std::byte*>(
            "C7 46 1C 00 00 80 3F 48 8D 05 ?? ?? ?? ?? 48 89 06 66 0F EF C0 F3 0F 7F 46 20"_sig.resolve(true)
        );
        if (match == nullptr) {
            getLogger().warn("CustomUIRendererRegistry: vftable signature not found; renderer injection will not work");
            return nullptr;
        }
        auto* lea  = match + 7;
        auto  disp = *reinterpret_cast<std::int32_t const*>(lea + 3);
        return reinterpret_cast<void**>(lea + 7 + disp);
    }();
    return vtbl;
}

// Fallback: the component-type bit, the way the game itself locates components in
// UIControlFactory — mComponentsInUse is a bitmask of component types in use, and a
// component's index inside mComponents is the number of set bits below its own bit.
// The bit global's address comes from the disp32 of the mov that reads it:
//   mov rdi, [rip+disp32]                     ; the component-bit global
//   lea rcx, [rdi-1]; mov rax, [rbx+0xb0]     ; bit-1, mComponentsInUse
//   and / mov / shr / movabs r8, 0x5555555555555555   ; hand-written popcount
uint64 const* customRenderComponentBitGlobal() {
    static uint64 const* global = []() -> uint64 const* {
        using namespace ll::literals;
        auto* match = static_cast<std::byte*>(
            ("48 8B 3D ?? ?? ?? ?? 48 8D 4F FF 48 8B 83 B0 00 00 00 48 21 C1 48 89 CA 48 D1 EA 49 B8 55 55 55 55 55 55 "
             "55 55"_sig)
                .resolve(true)
        );
        if (match == nullptr) {
            getLogger().warn(
                "CustomUIRendererRegistry: component-bit signature not found; renderer injection will not work"
            );
            return nullptr;
        }
        auto disp = *reinterpret_cast<std::int32_t const*>(match + 3);
        return reinterpret_cast<uint64 const*>(match + 7 + disp);
    }();
    return global;
}

CustomRenderComponent* findCustomRenderComponent(UIControl& control) {
    if (auto* vtbl = customRenderComponentVtable()) {
        for (auto& component : control.mComponents.get()) {
            if (*reinterpret_cast<void***>(component.get()) == vtbl) {
                return static_cast<CustomRenderComponent*>(component.get());
            }
        }
        return nullptr;
    }
    auto const* bitGlobal = customRenderComponentBitGlobal();
    if (bitGlobal == nullptr) {
        return nullptr;
    }
    // The bit is initialized lazily on first component creation; since origin() has
    // just created the CustomRenderComponent, the global is already populated. An
    // uninitialized global reads as 0 and simply never matches.
    uint64 bit   = *bitGlobal;
    uint64 inUse = control.mComponentsInUse;
    if ((bit & inUse) == 0) {
        return nullptr;
    }
    auto  index      = static_cast<size_t>(std::popcount(inUse & (bit - 1)));
    auto& components = control.mComponents.get();
    if (index >= components.size()) {
        return nullptr;
    }
    return static_cast<CustomRenderComponent*>(components[index].get());
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
