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
        std::string user,
        std::string minidmpName,
        std::string minidumpPath,
        std::string traceName,
        std::string tracePath,
        bool        isDev,
        std::string leviLaminaVersion
    );

    void addModSentryInfo(std::string const& modName, std::string const& dsn, std::string const& releaseVersion);
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

    std::string readFile(std::string const& filePath);

    void sendToSentry(
        SentryInfo const&     sentryInfo,
        std::string const&    url,
        nlohmann::json const& envelopeHeader,
        nlohmann::json const& eventPayload
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
