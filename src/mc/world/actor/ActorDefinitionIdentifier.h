#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

struct ActorDefinitionIdentifier {
public:
    // NOLINTBEGIN
    MCAPI ActorDefinitionIdentifier();

    MCAPI explicit ActorDefinitionIdentifier(char const* fullName);

    MCAPI explicit ActorDefinitionIdentifier(std::string const& fullName);

    MCAPI explicit ActorDefinitionIdentifier(::ActorType type);

    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier&& other);

    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier const& other);

    MCAPI ActorDefinitionIdentifier(std::string nameSpace, std::string identifier, std::string initEvent);

    MCAPI ::ActorType _getLegacyActorType() const;

    MCAPI class HashedString const& getCanonicalHash() const;

    MCAPI std::string const& getCanonicalName() const;

    MCAPI std::string const& getFullName() const;

    MCAPI std::string const& getIdentifier() const;

    MCAPI std::string const& getInitEvent() const;

    MCAPI std::string const& getNamespace() const;

    MCAPI void initialize(std::string const& fullName);

    MCAPI void initialize(std::string const& nameSpace, std::string const& identifier, std::string const& initEvent);

    MCAPI bool isEmpty() const;

    MCAPI bool isVanilla() const;

    MCAPI struct ActorDefinitionIdentifier& operator=(struct ActorDefinitionIdentifier const& other);

    MCAPI bool operator==(struct ActorDefinitionIdentifier const& other) const;

    MCAPI void setIdentifier(std::string const& identifier);

    MCAPI void setInitEvent(std::string const& initEvent);

    MCAPI ~ActorDefinitionIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initialize();

    MCAPI static void _extractIdentifier(std::string const& name, struct ActorDefinitionIdentifier& id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(::ActorType type);

    MCAPI void* ctor$(char const* fullName);

    MCAPI void* ctor$(std::string nameSpace, std::string identifier, std::string initEvent);

    MCAPI void* ctor$(struct ActorDefinitionIdentifier const& other);

    MCAPI void* ctor$(struct ActorDefinitionIdentifier&& other);

    MCAPI void* ctor$();

    MCAPI void* ctor$(std::string const& fullName);

    MCAPI void dtor$();

    // NOLINTEND
};
