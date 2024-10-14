#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

class DefaultCompositeSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    DefaultCompositeSchema& operator=(DefaultCompositeSchema const&);
    DefaultCompositeSchema(DefaultCompositeSchema const&);
    DefaultCompositeSchema();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doLoad(
        struct cereal::SchemaReader&     value,
        entt::meta_any&                  any,
        entt::meta_any const&            udata,
        class cereal::SerializerContext& context
    ) const;

    // vIndex: 1
    virtual void
    doSave(struct cereal::SchemaWriter& value, entt::meta_any const& any, class cereal::SerializerContext& context)
        const;

    // vIndex: 4
    virtual ~DefaultCompositeSchema() = default;

    // vIndex: 5
    virtual void unpack(
        std::vector<std::reference_wrapper<struct cereal::internal::BasicSchema::SetterDescriptor const>>& setters,
        entt::dense_map<
            std::string_view,
            std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>& members
    ) const;

    // vIndex: 8
    virtual void addParent(std::unique_ptr<class cereal::internal::BasicSchema> parent);

    // vIndex: 9
    virtual void addSetter(
        std::unique_ptr<class cereal::internal::BasicSchema> setter,
        entt::meta_type (*resolve)(entt::meta_ctx const&)
    );

    // vIndex: 10
    virtual void
    addMember(std::string_view name, std::unique_ptr<class cereal::internal::BasicSchema> member, bool required);

    // vIndex: 11
    virtual void customError(std::string const& memberName, std::string customMessage);

    MCAPI explicit DefaultCompositeSchema(struct cereal::ReflectionCtx const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI struct cereal::SchemaDescription makeDescriptionForType(entt::meta_type const& type) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void
    addMember$(std::string_view name, std::unique_ptr<class cereal::internal::BasicSchema> member, bool required);

    MCAPI void addParent$(std::unique_ptr<class cereal::internal::BasicSchema> parent);

    MCAPI void addSetter$(
        std::unique_ptr<class cereal::internal::BasicSchema> setter,
        entt::meta_type (*resolve)(entt::meta_ctx const&)
    );

    MCAPI void customError$(std::string const& memberName, std::string customMessage);

    MCAPI void doLoad$(
        struct cereal::SchemaReader&     value,
        entt::meta_any&                  any,
        entt::meta_any const&            udata,
        class cereal::SerializerContext& context
    ) const;

    MCAPI void
    doSave$(struct cereal::SchemaWriter& value, entt::meta_any const& any, class cereal::SerializerContext& context)
        const;

    MCAPI void unpack$(
        std::vector<std::reference_wrapper<struct cereal::internal::BasicSchema::SetterDescriptor const>>& setters,
        entt::dense_map<
            std::string_view,
            std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>& members
    ) const;

    // NOLINTEND
};

}; // namespace cereal::internal
