#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
struct BedrockLoadContext;
namespace cereal { struct SerializerContext; }
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

    MCAPI explicit ActorDefinitionIdentifier(::std::string_view fullName);

    MCAPI ActorDefinitionIdentifier(::ActorType type, ::std::string initEvent);

    MCAPI ActorDefinitionIdentifier(::std::string nameSpace, ::std::string identifier, ::std::string initEvent);

    MCAPI void _initialize();

    MCFOLD ::std::string const& getFullName() const;

    MCAPI ::ActorDefinitionIdentifier& operator=(::ActorDefinitionIdentifier const&);

    MCAPI bool operator==(::ActorDefinitionIdentifier const& other) const;

    MCAPI void setter(
        ::std::string const&               str,
        ::BedrockLoadContext               context,
        ::cereal::SerializerContext const& serializerContext
    );

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

    MCAPI void* $ctor(::std::string_view fullName);

    MCAPI void* $ctor(::ActorType type, ::std::string initEvent);

    MCAPI void* $ctor(::std::string nameSpace, ::std::string identifier, ::std::string initEvent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
