#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

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
    virtual void
    doLoad(struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&)
        const;

    // vIndex: 1
    virtual void doSave(struct cereal::SchemaWriter&, entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 4
    virtual ~DefaultCompositeSchema() = default;

    // vIndex: 5
    virtual void
    unpack(std::vector<std::reference_wrapper<struct cereal::internal::BasicSchema::SetterDescriptor const>>&, entt::dense_map<std::string_view, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>&)
        const;

    // vIndex: 8
    virtual void addParent(std::unique_ptr<class cereal::internal::BasicSchema>);

    // vIndex: 9
    virtual void
        addSetter(std::unique_ptr<class cereal::internal::BasicSchema>, entt::meta_type (*)(entt::meta_ctx const&));

    // vIndex: 10
    virtual void addMember(std::string_view, std::unique_ptr<class cereal::internal::BasicSchema>, bool);

    // vIndex: 11
    virtual void customError(std::string const&, std::string);

    MCAPI explicit DefaultCompositeSchema(struct cereal::ReflectionCtx const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI struct cereal::SchemaDescription makeDescriptionForType(entt::meta_type const&) const;

    // NOLINTEND
};

}; // namespace cereal::internal
