#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class Method {
public:
    // prevent constructor by default
    Method& operator=(Method const&);
    Method(Method const&);
    Method();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class Bedrock::Http::Method const& DEL();

    MCAPI static class Bedrock::Http::Method const& GET();

    MCAPI static class Bedrock::Http::Method const& HEAD();

    MCAPI static class Bedrock::Http::Method const& POST();

    MCAPI static class Bedrock::Http::Method const& PUT();

    // NOLINTEND
};

}; // namespace Bedrock::Http
