#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

struct Schema {
public:
    // prevent constructor by default
    Schema& operator=(Schema const&);
    Schema(Schema const&);

public:
    // NOLINTBEGIN
    // symbol: ??0Schema@internal@cereal@@QEAA@XZ
    MCAPI Schema();

    // symbol: ??0Schema@internal@cereal@@QEAA@AEBVBasicSchema@12@@Z
    MCAPI explicit Schema(class cereal::internal::BasicSchema const&);

    // symbol: ??0Schema@internal@cereal@@QEAA@AEBUReflectionCtx@2@I@Z
    MCAPI Schema(struct cereal::ReflectionCtx const&, uint);

    // symbol:
    // ?getErrors@Schema@internal@cereal@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getErrors() const;

    // symbol:
    // ?getLog@Schema@internal@cereal@@QEBAAEBV?$vector@ULogEntry@SerializerContext@cereal@@V?$allocator@ULogEntry@SerializerContext@cereal@@@std@@@std@@XZ
    MCAPI std::vector<struct cereal::SerializerContext::LogEntry> const& getLog() const;

    // symbol: ?isDefined@Schema@internal@cereal@@QEBA_NXZ
    MCAPI bool isDefined() const;

    // symbol: ?load@Schema@internal@cereal@@QEAA_NAEAUSchemaReader@3@Umeta_handle@entt@@AEBVmeta_any@6@@Z
    MCAPI bool load(struct cereal::SchemaReader&, entt::meta_handle, entt::meta_any const&);

    // symbol: ??4Schema@internal@cereal@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct cereal::internal::Schema& operator=(struct cereal::internal::Schema&&);

    // symbol: ?save@Schema@internal@cereal@@QEAA_NAEAUSchemaWriter@3@Umeta_handle@entt@@@Z
    MCAPI bool save(struct cereal::SchemaWriter&, entt::meta_handle);

    // symbol: ??1Schema@internal@cereal@@QEAA@XZ
    MCAPI ~Schema();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?loadImpl@Schema@internal@cereal@@AEAAXAEAUSchemaReader@3@Vmeta_any@entt@@AEBV56@@Z
    MCAPI void loadImpl(struct cereal::SchemaReader&, entt::meta_any, entt::meta_any const&);

    // NOLINTEND
};

}; // namespace cereal::internal
