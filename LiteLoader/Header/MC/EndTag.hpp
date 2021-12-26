// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EndTag : public Tag {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI nullptr_t value();
    LIAPI static std::unique_ptr<EndTag> create();
    LIAPI bool set();
    LIAPI nullptr_t get();

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDTAG
public:
    class EndTag& operator=(class EndTag const&) = delete;
    EndTag(class EndTag const&) = delete;
    EndTag() = delete;
#endif

public:
    /*0*/ virtual ~EndTag();
    /*1*/ virtual void deleteChildren();
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual std::string toString() const;
    /*5*/ virtual void __unk_vfn_2();
    /*6*/ virtual bool equals(class Tag const&) const;
    /*7*/ virtual std::unique_ptr<class Tag> copy() const;
    /*8*/ virtual void __unk_vfn_3();
    /*
    inline enum Tag::Type getId() const{
        enum Tag::Type (EndTag::*rv)() const;
        *((void**)&rv) = dlsym("?getId@EndTag@@UEBA?AW4Type@Tag@@XZ");
        return (this->*rv)();
    }
    inline unsigned __int64 hash() const{
        unsigned __int64 (EndTag::*rv)() const;
        *((void**)&rv) = dlsym("?hash@EndTag@@UEBA_KXZ");
        return (this->*rv)();
    }
    inline void load(class IDataInput& a0){
        void (EndTag::*rv)(class IDataInput&);
        *((void**)&rv) = dlsym("?load@EndTag@@UEAAXAEAVIDataInput@@@Z");
        return (this->*rv)(std::forward<class IDataInput&>(a0));
    }
    inline void write(class IDataOutput& a0) const{
        void (EndTag::*rv)(class IDataOutput&) const;
        *((void**)&rv) = dlsym("?write@EndTag@@UEBAXAEAVIDataOutput@@@Z");
        return (this->*rv)(std::forward<class IDataOutput&>(a0));
    }
    */

protected:

private:

};