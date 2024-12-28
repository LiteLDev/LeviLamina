#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerInitialLoadingComponent {
public:
    // prevent constructor by default
    ServerPlayerInitialLoadingComponent& operator=(ServerPlayerInitialLoadingComponent const&);
    ServerPlayerInitialLoadingComponent(ServerPlayerInitialLoadingComponent const&);
    ServerPlayerInitialLoadingComponent();
};
