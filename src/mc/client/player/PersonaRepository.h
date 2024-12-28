#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PersonaRepository {
public:
    // prevent constructor by default
    PersonaRepository& operator=(PersonaRepository const&);
    PersonaRepository(PersonaRepository const&);
    PersonaRepository();
};
