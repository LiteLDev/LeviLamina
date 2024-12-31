#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace cereal::internal {

class DefaultCompositeSchema : public ::cereal::internal::BasicSchema {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfc2431;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultCompositeSchema& operator=(DefaultCompositeSchema const&);
    DefaultCompositeSchema(DefaultCompositeSchema const&);
    DefaultCompositeSchema();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void doLoad(
        ::cereal::SchemaReader&      value,
        ::entt::meta_any&            any,
        ::entt::meta_any const&      udata,
        ::cereal::SerializerContext& context
    ) const /*override*/;

    // vIndex: 8
    virtual void
    doSave(::cereal::SchemaWriter& writer, ::entt::meta_any const& any, ::cereal::SerializerContext& context) const
        /*override*/;

    // vIndex: 1
    virtual void members(::std::function<void(uint, ::entt::meta_data)> cb) const /*override*/;

    // vIndex: 2
    virtual ::cereal::internal::BasicSchema::MemberDescriptor const* member(uint memberId) const /*override*/;

    // vIndex: 0
    virtual ~DefaultCompositeSchema() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DefaultCompositeSchema(::cereal::ReflectionCtx const& ctx, ::entt::type_info const& type);

    MCAPI ::cereal::SchemaDescription
    makeDescriptionForType(::entt::meta_type const& type, ::cereal::internal::BasicSchema::DescriptionMode mode) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::entt::type_info const& type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $doLoad(
        ::cereal::SchemaReader&      value,
        ::entt::meta_any&            any,
        ::entt::meta_any const&      udata,
        ::cereal::SerializerContext& context
    ) const;

    MCAPI void
    $doSave(::cereal::SchemaWriter& writer, ::entt::meta_any const& any, ::cereal::SerializerContext& context) const;

    MCAPI void $members(::std::function<void(uint, ::entt::meta_data)> cb) const;

    MCAPI ::cereal::internal::BasicSchema::MemberDescriptor const* $member(uint memberId) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal::internal
