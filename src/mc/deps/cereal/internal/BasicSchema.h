#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace cereal::internal {

class BasicSchema {
public:
    // BasicSchema inner types declare
    // clang-format off
    struct MemberDescriptor;
    struct SetterDescriptor;
    // clang-format on

    // BasicSchema inner types define
    struct MemberDescriptor {
    public:
        // prevent constructor by default
        MemberDescriptor& operator=(MemberDescriptor const&);
        MemberDescriptor(MemberDescriptor const&);
        MemberDescriptor();

    public:
        // NOLINTBEGIN
        MCAPI ~MemberDescriptor();

        // NOLINTEND
    };

    struct SetterDescriptor {
    public:
        // prevent constructor by default
        SetterDescriptor& operator=(SetterDescriptor const&);
        SetterDescriptor(SetterDescriptor const&);
        SetterDescriptor();

    public:
        // NOLINTBEGIN
        MCAPI ~SetterDescriptor();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BasicSchema& operator=(BasicSchema const&);
    BasicSchema(BasicSchema const&);
    BasicSchema();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void
    doLoad(struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&)
        const;

    // vIndex: 1
    virtual void doSave(struct cereal::SchemaWriter&, entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 2
    virtual bool doVerifyInitialization(entt::meta_any const&) const;

    // vIndex: 3
    virtual struct cereal::SchemaDescription makeDescription() const = 0;

    // vIndex: 4
    virtual ~BasicSchema();

    // vIndex: 5
    virtual void
    unpack(std::vector<std::reference_wrapper<struct cereal::internal::BasicSchema::SetterDescriptor const>>&, entt::dense_map<std::string_view, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>&)
        const;

    // vIndex: 6
    virtual void enumMapping(class cereal::SerializerEnumMapping);

    // vIndex: 7
    virtual class cereal::SerializerEnumMapping const* enumMapping() const;

    // vIndex: 8
    virtual void addParent(std::unique_ptr<class cereal::internal::BasicSchema>);

    // vIndex: 9
    virtual void
        addSetter(std::unique_ptr<class cereal::internal::BasicSchema>, entt::meta_type (*)(entt::meta_ctx const&));

    // vIndex: 10
    virtual void addMember(std::string_view, std::unique_ptr<class cereal::internal::BasicSchema>, bool);

    // vIndex: 11
    virtual void customError(std::string const&, std::string);

    // vIndex: 12
    virtual void constraint(std::unique_ptr<class cereal::Constraint>);

    // vIndex: 13
    virtual class cereal::Constraint const* constraint() const;

    MCAPI explicit BasicSchema(struct cereal::ReflectionCtx const&);

    MCAPI struct cereal::ReflectionCtx const& ctx() const;

    MCAPI void customError(std::string);

    MCAPI struct cereal::SchemaDescription description() const;

    MCAPI bool isProperlyInitialized(entt::meta_any const&) const;

    MCAPI void
    load(struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&) const;

    MCAPI void save(struct cereal::SchemaWriter&, entt::meta_any const&, class cereal::SerializerContext&) const;

    MCAPI static class cereal::internal::BasicSchema const& lookup(struct cereal::ReflectionCtx const&, uint);

    // NOLINTEND
};

}; // namespace cereal::internal
