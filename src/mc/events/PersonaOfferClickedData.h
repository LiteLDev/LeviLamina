#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::eventData {

class PersonaOfferClickedData {
public:
    // prevent constructor by default
    PersonaOfferClickedData& operator=(PersonaOfferClickedData const&);
    PersonaOfferClickedData(PersonaOfferClickedData const&);
    PersonaOfferClickedData();
};

}; // namespace Social::eventData
