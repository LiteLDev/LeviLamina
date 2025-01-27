#include <cpr/cpr.h>
#include <fstream>
#include <sstream>

#include <zlib.h>

#include "ll/api/i18n/I18n.h"
#include "ll/api/io/Logger.h"
#include "ll/api/io/LoggerRegistry.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/SentryUploader.h"
#include "mc/platform/UUID.h"

using json = nlohmann::json;

namespace ll {
auto sentryLogger = io::LoggerRegistry::getInstance().getOrCreate("SentryUploader");

std::string compressDataGzip(std::string const& data) {
    std::string compressedBuffer;
    z_stream    deflateStream{};
    if (deflateInit2(&deflateStream, Z_BEST_COMPRESSION, Z_DEFLATED, 15 + 16, 8, Z_DEFAULT_STRATEGY) != Z_OK) {
        throw std::runtime_error("Failed to initialize compression stream");
    }
    if (data.size() > std::numeric_limits<uint>::max()) {
        deflateEnd(&deflateStream);
        throw std::runtime_error("Data too large for compression");
    }
    deflateStream.avail_in = static_cast<uInt>(data.size());
    deflateStream.next_in  = (Bytef*)data.data();
    size_t bufferSize      = data.size();
    compressedBuffer.resize(bufferSize);
    deflateStream.avail_out = static_cast<uInt>(bufferSize);
    deflateStream.next_out  = (Bytef*)compressedBuffer.data();
    if (deflate(&deflateStream, Z_FINISH) != Z_STREAM_END) {
        deflateEnd(&deflateStream);
        throw std::runtime_error("Gzip compression failed");
    }
    compressedBuffer.resize(deflateStream.total_out);
    deflateEnd(&deflateStream);
    return compressedBuffer;
}

SentryUploader::SentryUploader(
    std::string user,
    std::string minidmpName,
    std::string minidumpPath,
    std::string traceName,
    std::string tracePath,
    bool        isDev,
    std::string leviLaminaVersion
)
: mIsDev(isDev),
  mLeviLaminaVersion(std::move(leviLaminaVersion)),
  mUser(std::move(user)),
  mMiniDumpName(std::move(minidmpName)),
  mMinidumpPath(std::move(minidumpPath)),
  mTraceName(std::move(traceName)),
  mTracePath(std::move(tracePath)) {
    mMinidumpContent       = readFile(mMinidumpPath);
    mAdditionalFileContent = readFile(mTracePath);
    mOSInfo.name           = sys_utils::isWine() ? "Linux(Wine)" : "Windows";
    mOSInfo.version        = sys_utils::getSystemVersion().to_string();
}

void SentryUploader::addModSentryInfo(
    std::string const& modName,
    std::string const& dsn,
    std::string const& releaseVersion,
    bool isInSuspectedModules
) try {
    auto protocolEnd = dsn.find("://");
    auto authEnd     = dsn.find('@', protocolEnd + 3);
    auto lastSlash   = dsn.rfind('/');

    if (protocolEnd == std::string::npos || authEnd == std::string::npos || lastSlash == std::string::npos) {
        throw std::invalid_argument("Invalid DSN format");
    }

    SentryInfo::DSNInfo info;
    info.protocol  = dsn.substr(0, protocolEnd);
    auto auth      = dsn.substr(protocolEnd + 3, authEnd - protocolEnd - 3);
    info.publicKey = auth.substr(0, auth.find(':'));
    info.host      = dsn.substr(authEnd + 1, lastSlash - authEnd - 1);
    info.projectId = dsn.substr(lastSlash + 1);

    mModsSentryConfig.push_back({info, dsn, modName, releaseVersion, isInSuspectedModules});
} catch (...) {
    sentryLogger->error("Error adding mod sentry info:");
    error_utils::printCurrentException(*sentryLogger);
    return;
}

void SentryUploader::uploadAll() {
    std::vector<std::thread> threads;

    threads.reserve(mModsSentryConfig.size());
    sentryLogger->info("Uploading crash report to Sentry..."_tr());
    for (auto const& sentryConfig : mModsSentryConfig) {
        threads.emplace_back([=, this]() {
            try {
                std::string url = sentryConfig.dsnInfo.protocol + "://" + sentryConfig.dsnInfo.host + "/api/"
                                + sentryConfig.dsnInfo.projectId + "/envelope/";
                std::string eventId = mce::UUID::random().asString();

                json envelopeHeader = {
                    {"event_id",          eventId},
                    {     "dsn", sentryConfig.dsn}
                };

                json eventPayload = {
                    {   "event_id",                                     eventId                                   },
                    {      "level",                                     sentryConfig.isFatal ? "fatal" : "warning"},
                    {   "platform",                                                                       "native"},
                    {        "sdk",                             {{"name", "crashLogger"}, {"version", "built-in"}}},
                    {    "release",                                                    sentryConfig.releaseVersion},
                    {"environment",                                          mIsDev ? "development" : "production"},
                    {       "user",                                                                {{"id", mUser}}},
                    {   "contexts",
                     {{"os", {{"name", mOSInfo.name}, {"version", mOSInfo.version}}},
                     {"runtime", {{"type", "runtime"}, {"name", "LeviLamina"}, {"version", mLeviLaminaVersion}}}} },
                };

                sendToSentry(sentryConfig, url, envelopeHeader, eventPayload);
            } catch (...) {
                sentryLogger->error("Error uploading to DSN: {}", sentryConfig.dsn);
                error_utils::printCurrentException(*sentryLogger);
            }
        });
    }

    for (auto& thread : threads) {
        thread.join();
    }
}

std::string SentryUploader::readFile(std::string const& filePath) {
    std::ifstream file(filePath, std::ios::binary);
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file: " + filePath);
    }
    return {std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>()};
}

void SentryUploader::sendToSentry(
    SentryInfo const&     sentryInfo,
    std::string const&    url,
    nlohmann::json const& envelopeHeader,
    nlohmann::json const& eventPayload
) {
    json eventHeader = {
        {  "type",                                      "event"},
        {"length", static_cast<int>(eventPayload.dump().size())}
    };

    json minidumpItemHeader = {
        {           "type",                              "attachment"},
        {         "length", static_cast<int>(mMinidumpContent.size())},
        {       "filename",                             mMiniDumpName},
        {"attachment_type",                          "event.minidump"}
    };

    json traceFileItemHeader = {
        {           "type",                                    "attachment"},
        {         "length", static_cast<int>(mAdditionalFileContent.size())},
        {       "filename",                                      mTraceName},
        {"attachment_type",                              "event.attachment"}
    };

    std::ostringstream envelopeStream;

    envelopeStream << envelopeHeader.dump() << "\n"
                   << eventHeader.dump() << "\n"
                   << eventPayload.dump() << "\n"
                   << minidumpItemHeader.dump() << "\n"
                   << mMinidumpContent << "\n"
                   << traceFileItemHeader.dump() << "\n"
                   << mAdditionalFileContent << "\n";

    std::string compressedData = compressDataGzip(envelopeStream.str());

    auto response = cpr::Post(
        cpr::Url{
            url
    },
        cpr::Header{
            {"Content-Type", "application/x-sentry-envelope"},
            {"Content-Encoding", "gzip"},
            {"X-Sentry-Auth",
             "Sentry sentry_version=7,sentry_client=sentry.dofes/0.1,sentry_key=" + sentryInfo.dsnInfo.publicKey},
        },
        cpr::Body{compressedData}
    );

    if (response.status_code == 200) {
        sentryLogger->info("Mod: {} uploaded successfully to Sentry"_tr(sentryInfo.modName));
        sentryLogger->info("Event ID: {}"_tr(to_string(json::parse(response.text)["id"])));
    } else {
        sentryLogger->error("Mod: {} Failed to upload to Sentry"_tr(sentryInfo.modName));
        sentryLogger->error("Status Code: {}"_tr(response.status_code));
        sentryLogger->error("Response: {}"_tr(response.text));
    }
}
} // namespace ll
