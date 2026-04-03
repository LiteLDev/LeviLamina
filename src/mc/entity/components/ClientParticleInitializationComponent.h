#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ParticleInitializationData;
// clang-format on

class ClientParticleInitializationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleInitializationData>> mParticleInitializationData;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientParticleInitializationComponent& operator=(ClientParticleInitializationComponent const&);
    ClientParticleInitializationComponent(ClientParticleInitializationComponent const&);
    ClientParticleInitializationComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ClientParticleInitializationComponent& operator=(::ClientParticleInitializationComponent&&);
    // NOLINTEND
};
