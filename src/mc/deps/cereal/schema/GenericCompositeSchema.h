#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/DefaultCompositeSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct MetaVisitor; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { struct LoadState; }
namespace cereal::internal { struct SaveState; }
// clang-format on

namespace cereal::internal {

class GenericCompositeSchema : public ::cereal::internal::DefaultCompositeSchema {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void doLoad(
        ::cereal::SchemaReader&              reader,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
    ) const /*override*/;

    virtual void doSave(
        ::cereal::SchemaWriter&              writer,
        ::entt::meta_any const&              any,
        ::cereal::internal::SaveState const& state
    ) const /*override*/;

    virtual bool doMap(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int iterate(
        ::entt::meta_type const& type,
        ::entt::meta_any&        src,
        ::entt::meta_any&        dst,
        ::cereal::MetaVisitor&   visitor
    ) const;

    MCAPI void members(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor) const;

    MCAPI bool setters(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $doLoad(
        ::cereal::SchemaReader&              reader,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
    ) const;

    MCAPI void $doSave(
        ::cereal::SchemaWriter&              writer,
        ::entt::meta_any const&              any,
        ::cereal::internal::SaveState const& state
    ) const;

    MCAPI bool $doMap(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor) const;


    // NOLINTEND
};

} // namespace cereal::internal
