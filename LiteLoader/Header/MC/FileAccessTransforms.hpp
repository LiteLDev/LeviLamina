// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FileAccessTransforms {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEACCESSTRANSFORMS
public:
    class FileAccessTransforms& operator=(class FileAccessTransforms const&) = delete;
    FileAccessTransforms(class FileAccessTransforms const&) = delete;
    FileAccessTransforms() = delete;
#endif

public:
    /*0*/ virtual ~FileAccessTransforms();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*
    inline bool writeTransform(std::vector<unsigned char>& a0) const{
        bool (FileAccessTransforms::*rv)(std::vector<unsigned char>&) const;
        *((void**)&rv) = dlsym("?writeTransform@FileAccessTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z");
        return (this->*rv)(std::forward<std::vector<unsigned char>&>(a0));
    }
    inline bool readTransform(std::vector<unsigned char>& a0) const{
        bool (FileAccessTransforms::*rv)(std::vector<unsigned char>&) const;
        *((void**)&rv) = dlsym("?readTransform@FileAccessTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z");
        return (this->*rv)(std::forward<std::vector<unsigned char>&>(a0));
    }
    */

protected:

private:

};