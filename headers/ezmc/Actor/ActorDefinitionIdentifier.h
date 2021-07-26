#pragma once

#include "../Core/HashedString.h"
#include "../dll.h"
#include "ActorType.h"
#include <string>

struct ActorDefinitionIdentifier {
    std::string  ns;            // 0
    std::string  identifier;    // 32
    std::string  event;         // 64
    std::string  fullname;      // 96
    HashedString canonicalHash; // 128

public:
    inline HashedString const& getCanonicalHash() const {
        return canonicalHash;
    }
    inline std::string const& getCanonicalName() const {
        return canonicalHash.getString();
    }
    inline std::string const& getFullName() const {
        return fullname;
    }
    inline std::string const& getIdentifier() const {
        return identifier;
    }
    inline std::string const& getInitEvent() const {
        return event;
    }
    inline std::string const& getNamespace() const {
        return ns;
    }
    inline bool isEmpty() const {
        return ns.empty() && identifier.empty();
    }
    inline bool isVanilla() const {
        return ns == "minecraft";
    }
    inline void setIdentifier(std::string const& id) {
        identifier = id;
    }
    inline void setInitEvent(std::string const& e) {
        event = e;
    }

    MCAPI ActorDefinitionIdentifier(ActorDefinitionIdentifier const&);
    MCAPI ActorDefinitionIdentifier(ActorDefinitionIdentifier&&);
    MCAPI ActorDefinitionIdentifier(std::string, std::string, std::string);
    MCAPI ActorDefinitionIdentifier(std::string const&);
    MCAPI ActorDefinitionIdentifier(ActorType);
    inline ActorDefinitionIdentifier() {
    }
    MCAPI ActorDefinitionIdentifier& operator=(ActorDefinitionIdentifier const&);
    MCAPI bool                       operator==(ActorDefinitionIdentifier const&);
};