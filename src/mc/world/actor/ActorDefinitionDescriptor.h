#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionTrigger;
class HashedString;
struct ActorDefinitionAttribute;
struct VariantParameterList;
// clang-format on

class ActorDefinitionDescriptor {
public:
    // ActorDefinitionDescriptor inner types declare
    // clang-format off
    struct IsHiddenWhenInvisibleDescription;
    // clang-format on

    // ActorDefinitionDescriptor inner types define
    struct IsHiddenWhenInvisibleDescription {
    public:
        // prevent constructor by default
        IsHiddenWhenInvisibleDescription& operator=(IsHiddenWhenInvisibleDescription const&);
        IsHiddenWhenInvisibleDescription(IsHiddenWhenInvisibleDescription const&);
        IsHiddenWhenInvisibleDescription();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk38c98b;
    ::ll::UntypedStorage<8, 40> mUnk8a6251;
    ::ll::UntypedStorage<8, 40> mUnkf1caa3;
    ::ll::UntypedStorage<1, 16> mUnke148ac;
    ::ll::UntypedStorage<1, 16> mUnk2ec5bf;
    ::ll::UntypedStorage<8, 72> mUnkdea602;
    ::ll::UntypedStorage<8, 32> mUnk1e58c3;
    ::ll::UntypedStorage<8, 24> mUnkd09558;
    ::ll::UntypedStorage<8, 32> mUnk4956d2;
    ::ll::UntypedStorage<4, 16> mUnk44ed44;
    ::ll::UntypedStorage<8, 24> mUnk20892b;
    ::ll::UntypedStorage<8, 24> mUnkabef02;
    ::ll::UntypedStorage<8, 64> mUnk30c12a;
    ::ll::UntypedStorage<8, 72> mUnk5cc8a1;
    ::ll::UntypedStorage<8, 72> mUnk964b8b;
    ::ll::UntypedStorage<8, 8>  mUnk58b68b;
    ::ll::UntypedStorage<8, 8>  mUnk980494;
    ::ll::UntypedStorage<8, 8>  mUnk59e54d;
    ::ll::UntypedStorage<8, 8>  mUnke3c0d4;
    ::ll::UntypedStorage<8, 8>  mUnkef1717;
    ::ll::UntypedStorage<8, 8>  mUnk3be202;
    ::ll::UntypedStorage<8, 8>  mUnkef5a1c;
    ::ll::UntypedStorage<8, 8>  mUnk4ead45;
    ::ll::UntypedStorage<8, 8>  mUnkdc9116;
    ::ll::UntypedStorage<8, 8>  mUnka965ef;
    ::ll::UntypedStorage<8, 8>  mUnkcc7a3a;
    ::ll::UntypedStorage<8, 8>  mUnke6f8ab;
    ::ll::UntypedStorage<8, 8>  mUnka2484c;
    ::ll::UntypedStorage<8, 8>  mUnk999bbf;
    ::ll::UntypedStorage<8, 8>  mUnkd9f9cc;
    ::ll::UntypedStorage<8, 8>  mUnk3e63f3;
    ::ll::UntypedStorage<8, 8>  mUnk32183a;
    ::ll::UntypedStorage<8, 8>  mUnk3b8e1f;
    ::ll::UntypedStorage<8, 8>  mUnk322fc9;
    ::ll::UntypedStorage<8, 8>  mUnk7c899e;
    ::ll::UntypedStorage<8, 8>  mUnkbfbd9e;
    ::ll::UntypedStorage<8, 8>  mUnk6ca10c;
    ::ll::UntypedStorage<8, 8>  mUnk4b8ef8;
    ::ll::UntypedStorage<8, 8>  mUnk223bd9;
    ::ll::UntypedStorage<8, 8>  mUnk6cc27d;
    ::ll::UntypedStorage<8, 8>  mUnka684d1;
    ::ll::UntypedStorage<8, 8>  mUnkacacee;
    ::ll::UntypedStorage<8, 8>  mUnk29a659;
    ::ll::UntypedStorage<8, 8>  mUnk33c0cd;
    ::ll::UntypedStorage<8, 8>  mUnkcfee4b;
    ::ll::UntypedStorage<8, 8>  mUnkf88548;
    ::ll::UntypedStorage<8, 8>  mUnk3fb34f;
    ::ll::UntypedStorage<8, 8>  mUnk5e8b89;
    ::ll::UntypedStorage<8, 8>  mUnkf47b49;
    ::ll::UntypedStorage<8, 8>  mUnkb22043;
    ::ll::UntypedStorage<8, 8>  mUnkff5cb8;
    ::ll::UntypedStorage<8, 8>  mUnkd51841;
    ::ll::UntypedStorage<8, 8>  mUnk9617a6;
    ::ll::UntypedStorage<8, 8>  mUnk6abcfe;
    ::ll::UntypedStorage<8, 8>  mUnk6cceca;
    ::ll::UntypedStorage<8, 8>  mUnkc28a0f;
    ::ll::UntypedStorage<8, 8>  mUnk3e6952;
    ::ll::UntypedStorage<8, 8>  mUnkbd599b;
    ::ll::UntypedStorage<8, 8>  mUnk58a1cf;
    ::ll::UntypedStorage<8, 8>  mUnk9016e0;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionDescriptor(ActorDefinitionDescriptor const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionDescriptor();

    MCAPI ActorDefinitionDescriptor(::ActorDefinitionDescriptor&&);

    MCAPI ::ActorDefinitionDescriptor& combine(::ActorDefinitionDescriptor const& rhs);

    MCAPI bool contains(::ActorDefinitionDescriptor const& rhs) const;

    MCAPI ::std::optional<::ActorDefinitionAttribute> findAttributeByName(::std::string const& attributeName) const;

    MCAPI bool hasComponent(::HashedString const& name) const;

    MCAPI bool hasJumpSubComponent();

    MCAPI bool hasMovementSubComponent();

    MCAPI bool hasNavigationSubComponent();

    MCAPI ::ActorDefinitionDescriptor& operator=(::ActorDefinitionDescriptor&&);

    MCAPI ::ActorDefinitionDescriptor& operator=(::ActorDefinitionDescriptor const&);

    MCAPI bool overlaps(::ActorDefinitionDescriptor const& rhs) const;

    MCAPI ::ActorDefinitionDescriptor& subtract(::ActorDefinitionDescriptor const& rhs);

    MCAPI ~ActorDefinitionDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _executeEvent(
        ::Actor&                                                              entity,
        ::std::string const&                                                  name,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::VariantParameterList const&                                         list
    );

    MCAPI static void _forceExecuteTrigger(
        ::Actor&                                                              entity,
        ::ActorDefinitionTrigger const&                                       trigger,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::VariantParameterList const&                                         list
    );

    MCAPI static bool executeEvent(::Actor& entity, ::std::string const& name, ::VariantParameterList const& list);

    MCAPI static bool
    executeTrigger(::Actor& entity, ::ActorDefinitionTrigger const& trigger, ::VariantParameterList const& list);

    MCAPI static void
    forceExecuteTrigger(::Actor& entity, ::ActorDefinitionTrigger const& trigger, ::VariantParameterList const& list);

    MCAPI static void forceExecuteTriggerChain(
        ::Actor&                                                              entity,
        ::ActorDefinitionTrigger const&                                       trigger,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::VariantParameterList const&                                         list
    );

    MCAPI static bool hasEvent(::Actor const& entity, ::std::string const& name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ActorDefinitionDescriptor&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
