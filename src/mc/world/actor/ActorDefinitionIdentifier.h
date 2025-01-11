#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct ActorDefinitionIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>  mNamespace;
    ::ll::TypedStorage<8, 32, ::std::string>  mIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>  mInitEvent;
    ::ll::TypedStorage<8, 32, ::std::string>  mFullName;
    ::ll::TypedStorage<8, 48, ::HashedString> mCanonicalName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionIdentifier();

    MCAPI ActorDefinitionIdentifier(::ActorDefinitionIdentifier&&);

    MCAPI ActorDefinitionIdentifier(::ActorDefinitionIdentifier const&);

    MCAPI explicit ActorDefinitionIdentifier(::std::string const& fullName);

    MCAPI explicit ActorDefinitionIdentifier(char const* fullName);

    MCAPI explicit ActorDefinitionIdentifier(::ActorType type);

    MCAPI ActorDefinitionIdentifier(::std::string nameSpace, ::std::string identifier, ::std::string initEvent);

    MCAPI ::ActorType _getLegacyActorType() const;

    MCAPI void _initialize();

    MCAPI void clear();

    MCFOLD ::HashedString const& getCanonicalHash() const;

    MCFOLD ::std::string const& getCanonicalName() const;

    MCFOLD ::std::string const& getFullName() const;

    MCFOLD ::std::string const& getIdentifier() const;

    MCFOLD ::std::string const& getInitEvent() const;

    MCFOLD ::std::string const& getNamespace() const;

    MCAPI void initialize(::std::string const& fullName);

    MCAPI void
    initialize(::std::string const& nameSpace, ::std::string const& identifier, ::std::string const& initEvent);

    MCAPI bool isEmpty() const;

    MCAPI bool isVanilla() const;

    MCAPI ::ActorDefinitionIdentifier& operator=(::ActorDefinitionIdentifier const&);

    MCAPI bool operator==(::ActorDefinitionIdentifier const& other) const;

    MCAPI void setIdentifier(::std::string const& identifier);

    MCAPI void setInitEvent(::std::string const& initEvent);

    MCAPI ~ActorDefinitionIdentifier();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _extractIdentifier(::std::string const& name, ::ActorDefinitionIdentifier& id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ActorDefinitionIdentifier&&);

    MCAPI void* $ctor(::ActorDefinitionIdentifier const&);

    MCAPI void* $ctor(::std::string const& fullName);

    MCAPI void* $ctor(char const* fullName);

    MCAPI void* $ctor(::ActorType type);

    MCAPI void* $ctor(::std::string nameSpace, ::std::string identifier, ::std::string initEvent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
