// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "IFileChunkUploader.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerFileChunkUploader : public IFileChunkUploader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERFILECHUNKUPLOADER
public:
    class ServerFileChunkUploader& operator=(class ServerFileChunkUploader const&) = delete;
    ServerFileChunkUploader(class ServerFileChunkUploader const&) = delete;
    ServerFileChunkUploader() = delete;
#endif

public:
    /*0*/ virtual ~ServerFileChunkUploader();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void initFileUploader(std::string const&, struct FileInfo const&, int, class Json::Value const&, class std::function<void (bool)>);
    /*3*/ virtual void getServerMissingChunks(struct FileInfo const&, class std::function<void (std::vector<struct FileChunkInfo>)>) const;
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void uploadChunk(struct FileInfo const&, struct FileChunkInfo const&, std::vector<unsigned char> const&, class std::function<void (bool)>);
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual void __unk_vfn_3();
    /*8*/ virtual void __unk_vfn_4();
    /*9*/ virtual void __unk_vfn_5();
    /*10*/ virtual struct FileChunkInfo getChunkInfo(struct FileInfo const&, int) const;
    /*
    inline bool canCancelUpload(struct FileInfo const& a0) const{
        bool (ServerFileChunkUploader::*rv)(struct FileInfo const&) const;
        *((void**)&rv) = dlsym("?canCancelUpload@ServerFileChunkUploader@@UEBA_NAEBUFileInfo@@@Z");
        return (this->*rv)(std::forward<struct FileInfo const&>(a0));
    }
    inline void update(){
        void (ServerFileChunkUploader::*rv)();
        *((void**)&rv) = dlsym("?update@ServerFileChunkUploader@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void confirmChunkReceived(struct FileInfo const& a0, struct FileChunkInfo const& a1){
        void (ServerFileChunkUploader::*rv)(struct FileInfo const&, struct FileChunkInfo const&);
        *((void**)&rv) = dlsym("?confirmChunkReceived@ServerFileChunkUploader@@UEAAXAEBUFileInfo@@AEBUFileChunkInfo@@@Z");
        return (this->*rv)(std::forward<struct FileInfo const&>(a0), std::forward<struct FileChunkInfo const&>(a1));
    }
    inline void cancelUpload(struct FileInfo const& a0){
        void (ServerFileChunkUploader::*rv)(struct FileInfo const&);
        *((void**)&rv) = dlsym("?cancelUpload@ServerFileChunkUploader@@UEAAXAEBUFileInfo@@@Z");
        return (this->*rv)(std::forward<struct FileInfo const&>(a0));
    }
    inline float getUploadProgress(struct FileInfo const& a0) const{
        float (ServerFileChunkUploader::*rv)(struct FileInfo const&) const;
        *((void**)&rv) = dlsym("?getUploadProgress@ServerFileChunkUploader@@UEBAMAEBUFileInfo@@@Z");
        return (this->*rv)(std::forward<struct FileInfo const&>(a0));
    }
    inline enum UploadError getInitErrorCode() const{
        enum UploadError (ServerFileChunkUploader::*rv)() const;
        *((void**)&rv) = dlsym("?getInitErrorCode@ServerFileChunkUploader@@UEBA?AW4UploadError@@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};