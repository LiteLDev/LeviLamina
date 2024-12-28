#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PersonaService {
public:
    // prevent constructor by default
    PersonaService& operator=(PersonaService const&);
    PersonaService(PersonaService const&);
    PersonaService();
};
