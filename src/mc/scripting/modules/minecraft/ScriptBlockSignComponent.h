#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SignTextSide.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"
#include "mc/world/item/components/ItemColor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptRawTextInterface; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockSignComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockSignComponent& operator=(ScriptBlockSignComponent const&);
    ScriptBlockSignComponent(ScriptBlockSignComponent const&);
    ScriptBlockSignComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptBlockSignComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBlockSignComponent();

    // symbol:
    // ?getRawText@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@UScriptRawTextInterface@ScriptModuleMinecraft@@@std@@$$V@Scripting@@W4SignTextSide@@@Z
    MCAPI class Scripting::Result<std::optional<struct ScriptModuleMinecraft::ScriptRawTextInterface>>
        getRawText(::SignTextSide) const;

    // symbol:
    // ?getText@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$V@Scripting@@W4SignTextSide@@@Z
    MCAPI class Scripting::Result<std::optional<std::string>> getText(::SignTextSide) const;

    // symbol:
    // ?getTextDyeColor@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@W4ItemColor@@@std@@$$V@Scripting@@W4SignTextSide@@@Z
    MCAPI class Scripting::Result<std::optional<::ItemColor>> getTextDyeColor(::SignTextSide) const;

    // symbol: ?getWaxed@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getWaxed() const;

    // symbol:
    // ?setText@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@UScriptRawTextInterface@4@@std@@W4SignTextSide@@@Z
    MCAPI class Scripting::Result<void> setText(
        std::variant<
            std::string,
            struct ScriptModuleMinecraft::ScriptRawMessageInterface,
            struct ScriptModuleMinecraft::ScriptRawTextInterface> const&,
        ::SignTextSide
    );

    // symbol:
    // ?setTextDyeColor@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$optional@W4ItemColor@@@std@@W4SignTextSide@@@Z
    MCAPI class Scripting::Result<void> setTextDyeColor(std::optional<::ItemColor>, ::SignTextSide);

    // symbol: ?setWaxed@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> setWaxed();

    // symbol:
    // ?bind@ScriptBlockSignComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockSignComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockSignComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol:
    // ?tryCreate@ScriptBlockSignComponent@ScriptModuleMinecraft@@SA?AV?$optional@V?$StrongTypedObjectHandle@VScriptBlockSignComponent@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVBlockSource@@VBlockPos@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI static std::optional<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockSignComponent>>
    tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);

    // symbol: ?ComponentId@ScriptBlockSignComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
