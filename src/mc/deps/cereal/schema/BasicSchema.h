#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/VariantPriorityLevel.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct DescriptionConfig; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { struct LoadState; }
namespace cereal::internal { struct OverrideState; }
namespace cereal::internal { struct ReflectionContext; }
namespace cereal::internal { struct SaveState; }
// clang-format on

namespace cereal::internal {

class BasicSchema {
public:
    // BasicSchema inner types declare
    // clang-format off
    struct DynamicSetterArg;
    struct GetterDescriptor;
    struct MemberDescriptor;
    struct MemberFamily;
    struct SetterDescriptor;
    struct TaggedVariantDescriptor;
    struct TypeDescriptor;
    // clang-format on

    // BasicSchema inner types define
    struct DynamicSetterArg {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnka33fb1;
        ::ll::UntypedStorage<8, 8>  mUnkcc227c;
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

    struct GetterDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk74679d;
        ::ll::UntypedStorage<1, 1> mUnk7505fe;
        // NOLINTEND

    public:
        // prevent constructor by default
        GetterDescriptor& operator=(GetterDescriptor const&);
        GetterDescriptor(GetterDescriptor const&);
        GetterDescriptor();
    };

    struct MemberDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk81e2b5;
        ::ll::UntypedStorage<8, 8>  mUnk937fa7;
        ::ll::UntypedStorage<8, 32> mUnkf2d8ae;
        ::ll::UntypedStorage<8, 32> mUnk5e01d3;
        ::ll::UntypedStorage<8, 8>  mUnkb0e062;
        ::ll::UntypedStorage<8, 72> mUnk99d9f1;
        ::ll::UntypedStorage<8, 24> mUnk54613d;
        ::ll::UntypedStorage<8, 32> mUnk748427;
        ::ll::UntypedStorage<1, 1>  mUnk9dbec8;
        ::ll::UntypedStorage<1, 1>  mUnkb484a6;
        ::ll::UntypedStorage<1, 1>  mUnk39c99d;
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

    struct MemberFamily {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnk3a19ad;
        ::ll::UntypedStorage<4, 4>  mUnka1413a;
        // NOLINTEND

    public:
        // prevent constructor by default
        MemberFamily& operator=(MemberFamily const&);
        MemberFamily(MemberFamily const&);
        MemberFamily();
    };

    struct SetterDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkbfd728;
        ::ll::UntypedStorage<8, 8> mUnkd0b8e8;
        ::ll::UntypedStorage<1, 1> mUnkf432c3;
        // NOLINTEND

    public:
        // prevent constructor by default
        SetterDescriptor& operator=(SetterDescriptor const&);
        SetterDescriptor(SetterDescriptor const&);
        SetterDescriptor();
    };

    struct TaggedVariantDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkdd8194;
        ::ll::UntypedStorage<8, 32> mUnkd3ba52;
        // NOLINTEND

    public:
        // prevent constructor by default
        TaggedVariantDescriptor& operator=(TaggedVariantDescriptor const&);
        TaggedVariantDescriptor(TaggedVariantDescriptor const&);
        TaggedVariantDescriptor();
    };

    struct TypeDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkdf496c;
        ::ll::UntypedStorage<8, 32> mUnk21bf73;
        ::ll::UntypedStorage<8, 72> mUnkbece46;
        ::ll::UntypedStorage<8, 24> mUnkd6def4;
        ::ll::UntypedStorage<8, 32> mUnk95d3f9;
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

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicSchema() = default;

    virtual bool isGreedy(::entt::meta_ctx const& ctx) const;

    virtual ::cereal::internal::VariantPriorityLevel minVariantPriorityLevel(::entt::meta_ctx const& ctx) const;

    virtual void doLoad(
        ::cereal::SchemaReader&              reader,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
    ) const;

    virtual void doSave(
        ::cereal::SchemaWriter&              writer,
        ::entt::meta_any const&              any,
        ::cereal::internal::SaveState const& state
    ) const;

    virtual ::cereal::SchemaDescription
    makeDescription(::cereal::internal::ReflectionContext const& ctx, ::cereal::DescriptionConfig config) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void load(
        ::cereal::SchemaReader&              value,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::cereal::internal::BasicSchema const& lookup(::entt::meta_ctx const& ctx, ::entt::type_info info);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isGreedy(::entt::meta_ctx const& ctx) const;

    MCNAPI ::cereal::internal::VariantPriorityLevel $minVariantPriorityLevel(::entt::meta_ctx const& ctx) const;


    // NOLINTEND
};

} // namespace cereal::internal
