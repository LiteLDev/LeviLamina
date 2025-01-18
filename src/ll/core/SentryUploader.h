#pragma once

#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>


using json = nlohmann::json;

namespace ll {
class SentryUploader {
public:
    SentryUploader(
        const std::string& user,
        const std::string& minidmpName,
        const std::string& minidumpPath,
        const std::string& traceName,
        const std::string& tracePath,
        bool               isDev,
        const std::string& leviLaminaVersion
    );

    void addModSentryInfo(const std::string& modName, const std::string& dsn, const std::string& releaseVersion);
    void uploadAll();

private:
    struct SentryInfo {
        struct DSNInfo {
            std::string protocol;
            std::string host;
            std::string publicKey;
            std::string projectId;
        } dsnInfo;
        std::string dsn;
        std::string modName;
        std::string releaseVersion;
    };

    std::string readFile(const std::string& filePath);
    void        sendToSentry(
               const SentryInfo&     sentryInfo,
               const std::string&    url,
               const nlohmann::json& envelopeHeader,
               const nlohmann::json& eventPayload
           );

    struct {
        std::string name;
        std::string version;
    } mOSInfo;

    bool                    mIsDev;
    std::string             mLeviLaminaVersion;
    std::string             mUser;
    std::string             mMiniDumpName;
    std::string             mMinidumpPath;
    std::string             mTraceName;
    std::string             mTracePath;
    std::string             mMinidumpContent;
    std::string             mAdditionalFileContent;
    std::vector<SentryInfo> mModsSentryConfig;
};
} // namespace ll