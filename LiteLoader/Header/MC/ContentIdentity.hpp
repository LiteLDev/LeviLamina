// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ContentIdentity {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTENTIDENTITY
public:
#endif
    MCAPI ContentIdentity();
    MCAPI ContentIdentity(class ContentIdentity &&);
    MCAPI ContentIdentity(class ContentIdentity const &);
    MCAPI ContentIdentity(class mce::UUID const &);
    MCAPI std::string asString() const;
    MCAPI class mce::UUID const & getAsUUID() const;
    MCAPI bool isValid() const;
    MCAPI bool operator!=(class ContentIdentity const &) const;
    MCAPI class ContentIdentity & operator=(class ContentIdentity const &);
    MCAPI class ContentIdentity & operator=(class ContentIdentity &&);
    MCAPI bool operator==(class ContentIdentity const &) const;
    MCAPI static class ContentIdentity EMPTY;
    MCAPI static class ContentIdentity fromString(std::string const &);



};