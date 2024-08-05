#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
class StructureTemplate;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptStructureTemplate; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace ScriptModuleMinecraft { struct ScriptStructureCreateOptions; }
namespace ScriptModuleMinecraft { struct ScriptStructurePlaceOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureManager {
public:
    // prevent constructor by default
    ScriptStructureManager& operator=(ScriptStructureManager const&);
    ScriptStructureManager();

public:
    // NOLINTBEGIN
    MCAPI ScriptStructureManager(class ScriptModuleMinecraft::ScriptStructureManager&&);

    MCAPI ScriptStructureManager(class ScriptModuleMinecraft::ScriptStructureManager const&);

    MCAPI ScriptStructureManager(class Scripting::WeakLifetimeScope const&, gsl::not_null<class ServerLevel*>);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureTemplate>,
        struct Scripting::InvalidArgumentError,
        struct Scripting::EngineError>
    createEmptyStructure(std::string const&, class Vec3 const&, ::StructureRedstoneSaveMode);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureTemplate>,
        struct Scripting::InvalidArgumentError>
    createStructureFromWorld(std::string const&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension> const&, class Vec3 const&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptStructureCreateOptions> const&);

    MCAPI class Scripting::Result<bool, struct Scripting::InvalidArgumentError>
    deleteStructure(std::variant<
                    std::string,
                    class Scripting::StrongTypedObjectHandle<
                        class ScriptModuleMinecraft::ScriptStructureTemplate>> const&);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureTemplate>
    getOrCreateScriptStructure(class StructureTemplate&);

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureTemplate>>
          getStructure(std::string const&);

    MCAPI std::vector<std::string> getWorldStructureIds() const;

    MCAPI class ScriptModuleMinecraft::ScriptStructureManager&
    operator=(class ScriptModuleMinecraft::ScriptStructureManager&&);

    MCAPI class Scripting::
        Result<
            void,
            struct ScriptModuleMinecraft::ScriptInvalidStructureError,
            struct Scripting::InvalidArgumentError,
            struct Scripting::ArgumentOutOfBoundsError>
        placeStructure(std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureTemplate>>&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension> const&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptStructurePlaceOptions> const&);

    MCAPI std::optional<struct Scripting::InvalidArgumentError> validateIdentifier(std::string const&) const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptStructureManager> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class StructureTemplate const*
    _getStructure(std::variant<
                  std::string,
                  class Scripting::StrongTypedObjectHandle<
                      class ScriptModuleMinecraft::ScriptStructureTemplate>> const&) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
