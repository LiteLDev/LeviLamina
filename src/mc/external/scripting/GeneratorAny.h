#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ScriptValue.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptValue; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct GeneratorType; }
// clang-format on

namespace Scripting {

class GeneratorAny : public ::Scripting::ScriptValue {
public:
    // prevent constructor by default
    GeneratorAny();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GeneratorAny@Scripting@@UEAA@XZ
    virtual ~GeneratorAny() = default;

    // symbol: ??0GeneratorAny@Scripting@@QEAA@$$QEAV01@@Z
    MCAPI GeneratorAny(class Scripting::GeneratorAny&&);

    // symbol: ??0GeneratorAny@Scripting@@QEAA@AEBV01@@Z
    MCAPI GeneratorAny(class Scripting::GeneratorAny const&);

    // symbol:
    // ??0GeneratorAny@Scripting@@QEAA@PEAVIRuntime@1@UContextId@1@VWeakLifetimeScope@1@AEBV?$StrongTypedObjectHandle@UGeneratorType@Scripting@@@1@@Z
    MCAPI
    GeneratorAny(class Scripting::IRuntime*, struct Scripting::ContextId, class Scripting::WeakLifetimeScope, class Scripting::StrongTypedObjectHandle<struct Scripting::GeneratorType> const&);

    // symbol: ??4GeneratorAny@Scripting@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Scripting::GeneratorAny& operator=(class Scripting::GeneratorAny&&);

    // symbol: ??4GeneratorAny@Scripting@@QEAAAEAV01@AEBV01@@Z
    MCAPI class Scripting::GeneratorAny& operator=(class Scripting::GeneratorAny const&);

    // symbol: ?valid@GeneratorAny@Scripting@@QEBA_NXZ
    MCAPI bool valid() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?nextGeneric@GeneratorAny@Scripting@@IEBA?AVResultAny@2@AEAVmeta_any@entt@@Vmeta_type@5@@Z
    MCAPI class Scripting::ResultAny nextGeneric(entt::meta_any&, entt::meta_type) const;

    // NOLINTEND
};

}; // namespace Scripting
