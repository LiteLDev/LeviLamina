// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FilterTestLightLevel : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTLIGHTLEVEL
public:
    class FilterTestLightLevel& operator=(class FilterTestLightLevel const&) = delete;
    FilterTestLightLevel(class FilterTestLightLevel const&) = delete;
    FilterTestLightLevel() = delete;
#endif

public:
    /*0*/ virtual ~FilterTestLightLevel();
    /*1*/ virtual bool evaluate(struct FilterContext const&) const;
    /*2*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*3*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
    /*4*/ virtual void __unk_vfn_0();

protected:

private:

};