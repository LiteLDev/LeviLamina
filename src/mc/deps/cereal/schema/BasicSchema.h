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
        ::ll::UntypedStorage<8, 72> mUnkace713;
        ::ll::UntypedStorage<8, 32> mUnk5fc8e6;
        // NOLINTEND

    public:
        // prevent constructor by default
        TypeDescriptor& operator=(TypeDescriptor const&);
        TypeDescriptor(TypeDescriptor const&);
        TypeDescriptor();
    };

    struct SetterDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkc28d37;
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
        ::ll::UntypedStorage<8, 32> mUnkc97556;
        ::ll::UntypedStorage<8, 8>  mUnkb0e062;
        ::ll::UntypedStorage<8, 72> mUnk86263e;
        ::ll::UntypedStorage<8, 40> mUnk3afbfc;
        ::ll::UntypedStorage<8, 32> mUnke471ac;
        // NOLINTEND

    public:
        // prevent constructor by default
        MemberDescriptor& operator=(MemberDescriptor const&);
        MemberDescriptor(MemberDescriptor const&);
        MemberDescriptor();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI MemberDescriptor(
            ::std::unique_ptr<::cereal::internal::BasicSchema> ref,
            ::std::string                                      name,
            ::entt::meta_type (*argCtor)(::entt::meta_ctx const&)
        );

        MCAPI ~MemberDescriptor();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::std::unique_ptr<::cereal::internal::BasicSchema> ref,
            ::std::string                                      name,
            ::entt::meta_type (*argCtor)(::entt::meta_ctx const&)
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct DynamicSetterArg {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnkfc5c34;
        ::ll::UntypedStorage<8, 192> mUnka33fb1;
        // NOLINTEND

    public:
        // prevent constructor by default
        DynamicSetterArg& operator=(DynamicSetterArg const&);
        DynamicSetterArg(DynamicSetterArg const&);
        DynamicSetterArg();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~DynamicSetterArg();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    enum class DescriptionMode : int {
        Brief    = 0,
        Detailed = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc84a50;
    ::ll::UntypedStorage<8, 8> mUnk58e4a5;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicSchema& operator=(BasicSchema const&);
    BasicSchema(BasicSchema const&);
    BasicSchema();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BasicSchema();

    // vIndex: 1
    virtual void members(::std::function<void(uint, ::entt::meta_data)> cb) const;

    // vIndex: 2
    virtual ::cereal::internal::BasicSchema::MemberDescriptor const* member(uint) const;

    // vIndex: 4
    virtual void enumMapping(::cereal::SerializerEnumMapping);

    // vIndex: 3
    virtual ::cereal::SerializerEnumMapping const* enumMapping() const;

    // vIndex: 6
    virtual void constraint(::std::unique_ptr<::cereal::Constraint> constraint);

    // vIndex: 5
    virtual ::cereal::Constraint const* constraint() const;

    // vIndex: 7
    virtual void
    doLoad(::cereal::SchemaReader&, ::entt::meta_any&, ::entt::meta_any const&, ::cereal::SerializerContext& context)
        const;

    // vIndex: 8
    virtual void doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::SerializerContext& context) const;

    // vIndex: 9
    virtual bool doVerifyInitialization(::cereal::SchemaWriter const&, ::entt::meta_any const&) const;

    // vIndex: 10
    virtual ::cereal::SchemaDescription makeDescription(::cereal::internal::BasicSchema::DescriptionMode) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BasicSchema(::cereal::ReflectionCtx const& ctx);

    MCAPI ::cereal::ReflectionCtx const& ctx() const;

    MCAPI ::cereal::SchemaDescription description(::cereal::internal::BasicSchema::DescriptionMode mode) const;

    MCAPI bool isProperlyInitialized(::cereal::SchemaWriter const& writer, ::entt::meta_any const& any) const;

    MCAPI void load(
        ::cereal::SchemaReader&      value,
        ::entt::meta_any&            any,
        ::entt::meta_any const&      udata,
        ::cereal::SerializerContext& context
    ) const;

    MCAPI void
    save(::cereal::SchemaWriter& value, ::entt::meta_any const& any, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::cereal::internal::BasicSchema const& lookup(::cereal::ReflectionCtx const& reflectionCtx, uint id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $members(::std::function<void(uint, ::entt::meta_data)> cb) const;

    MCAPI ::cereal::internal::BasicSchema::MemberDescriptor const* $member(uint) const;

    MCAPI void $enumMapping(::cereal::SerializerEnumMapping);

    MCAPI ::cereal::SerializerEnumMapping const* $enumMapping() const;

    MCAPI void $constraint(::std::unique_ptr<::cereal::Constraint> constraint);

    MCAPI ::cereal::Constraint const* $constraint() const;

    MCAPI void
    $doLoad(::cereal::SchemaReader&, ::entt::meta_any&, ::entt::meta_any const&, ::cereal::SerializerContext& context)
        const;

    MCAPI void $doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::SerializerContext& context) const;

    MCAPI bool $doVerifyInitialization(::cereal::SchemaWriter const&, ::entt::meta_any const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal::internal
