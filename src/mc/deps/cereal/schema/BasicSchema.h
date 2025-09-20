#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/VariantPriorityLevel.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace cereal::internal {

class BasicSchema {
public:
    // BasicSchema inner types declare
    // clang-format off
    struct DynamicSetterArg;
    struct MemberDescriptor;
    struct SetterDescriptor;
    struct TypeDescriptor;
    // clang-format on

    // BasicSchema inner types define
    struct TypeDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk25883b;
        ::ll::UntypedStorage<8, 32> mUnka7498e;
        ::ll::UntypedStorage<8, 72> mUnkf81a52;
        ::ll::UntypedStorage<8, 32> mUnk5fc8e6;
        ::ll::UntypedStorage<1, 1>  mUnk7fcb00;
        // NOLINTEND

    public:
        // prevent constructor by default
        TypeDescriptor& operator=(TypeDescriptor const&);
        TypeDescriptor(TypeDescriptor const&);
        TypeDescriptor();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~TypeDescriptor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct SetterDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkc28d37;
        ::ll::UntypedStorage<8, 8> mUnk7833a6;
        // NOLINTEND

    public:
        // prevent constructor by default
        SetterDescriptor& operator=(SetterDescriptor const&);
        SetterDescriptor(SetterDescriptor const&);
        SetterDescriptor();
    };

    struct MemberDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkf6e459;
        ::ll::UntypedStorage<8, 8>  mUnkcc5bac;
        ::ll::UntypedStorage<8, 32> mUnkc97556;
        ::ll::UntypedStorage<8, 8>  mUnkb0e062;
        ::ll::UntypedStorage<8, 72> mUnkf7b794;
        ::ll::UntypedStorage<8, 40> mUnk3afbfc;
        ::ll::UntypedStorage<8, 32> mUnke471ac;
        ::ll::UntypedStorage<1, 1>  mUnk9dbec8;
        // NOLINTEND

    public:
        // prevent constructor by default
        MemberDescriptor& operator=(MemberDescriptor const&);
        MemberDescriptor(MemberDescriptor const&);
        MemberDescriptor();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI MemberDescriptor(::cereal::internal::BasicSchema::MemberDescriptor&&);

        MCNAPI ~MemberDescriptor();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::cereal::internal::BasicSchema::MemberDescriptor&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct DynamicSetterArg {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 208> mUnka33fb1;
        ::ll::UntypedStorage<8, 8>   mUnkcc227c;
        // NOLINTEND

    public:
        // prevent constructor by default
        DynamicSetterArg& operator=(DynamicSetterArg const&);
        DynamicSetterArg(DynamicSetterArg const&);
        DynamicSetterArg();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~DynamicSetterArg();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    enum class DescriptionMode : int {
        Brief    = 0,
        Detailed = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BasicSchema() = default;

    // vIndex: 1
    virtual bool isGreedy(::entt::meta_ctx const&) const;

    // vIndex: 2
    virtual void members(::entt::meta_ctx const&, ::std::function<void(uint, ::entt::meta_data)>) const;

    // vIndex: 3
    virtual ::cereal::internal::BasicSchema::MemberDescriptor const* member(::entt::meta_ctx const&, uint) const;

    // vIndex: 4
    virtual ::cereal::internal::VariantPriorityLevel minVariantPriorityLevel(::entt::meta_ctx const&) const;

    // vIndex: 5
    virtual void validateConstraint(
        ::cereal::Constraint const&  constraint,
        ::entt::meta_any const&      any,
        ::cereal::SerializerContext& context
    ) const;

    // vIndex: 6
    virtual void
    doLoad(::cereal::SchemaReader&, ::entt::meta_any&, ::entt::meta_any const&, ::cereal::SerializerContext&) const;

    // vIndex: 7
    virtual void doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::SerializerContext& context) const;

    // vIndex: 8
    virtual bool doVerifyInitialization(::cereal::SchemaWriter const&, ::entt::meta_any const&) const;

    // vIndex: 9
    virtual ::cereal::SchemaDescription
    makeDescription(::entt::meta_ctx const&, ::cereal::internal::BasicSchema::DescriptionMode) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void load(
        ::cereal::SchemaReader&      value,
        ::entt::meta_any&            any,
        ::entt::meta_any const&      udata,
        ::cereal::SerializerContext& context
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isGreedy(::entt::meta_ctx const&) const;

    MCNAPI void $members(::entt::meta_ctx const&, ::std::function<void(uint, ::entt::meta_data)>) const;

    MCNAPI ::cereal::internal::BasicSchema::MemberDescriptor const* $member(::entt::meta_ctx const&, uint) const;

    MCNAPI ::cereal::internal::VariantPriorityLevel $minVariantPriorityLevel(::entt::meta_ctx const&) const;

    MCNAPI void $validateConstraint(
        ::cereal::Constraint const&  constraint,
        ::entt::meta_any const&      any,
        ::cereal::SerializerContext& context
    ) const;

    MCNAPI void $doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::SerializerContext& context) const;

    MCNAPI bool $doVerifyInitialization(::cereal::SchemaWriter const&, ::entt::meta_any const&) const;
    // NOLINTEND
};

} // namespace cereal::internal
