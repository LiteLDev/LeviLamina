#include <cpr/cpr.h>
#include <fstream>
#include <sstream>

#include <zlib.h>

#include "ll/api/io/Logger.h"
#include "ll/api/io/LoggerRegistry.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/SentryUploader.h"
#include "mc/platform/UUID.h"

using json = nlohmann::json;

namespace ll {
auto sentryLogger = io::LoggerRegistry::getInstance().getOrCreate("SentryUploader");

std::string compressDataGzip(const std::string& data) {
    std::vector<char> compressedBuffer;
    z_stream          deflateStream{};
    if (deflateInit2(&deflateStream, Z_BEST_COMPRESSION, Z_DEFLATED, 15 + 16, 8, Z_DEFAULT_STRATEGY) != Z_OK) {
        throw std::runtime_error("Failed to initialize compression stream");
    }
    if (data.size() > std::numeric_limits<uint>::max()) {
        deflateEnd(&deflateStream);
        throw std::runtime_error("Data too large for compression");
    }
    deflateStream.avail_in = static_cast<uint>(data.size());
    deflateStream.next_in  = (byte*)data.data();
    size_t bufferSize      = data.size();
    compressedBuffer.resize(bufferSize);
    deflateStream.avail_out = static_cast<uint>(bufferSize);
    deflateStream.next_out  = (byte*)compressedBuffer.data();
    if (deflate(&deflateStream, Z_FINISH) != Z_STREAM_END) {
        deflateEnd(&deflateStream);
        throw std::runtime_error("Gzip compression failed");
    }
    compressedBuffer.resize(deflateStream.total_out);
    deflateEnd(&deflateStream);
    return {compressedBuffer.begin(), compressedBuffer.end()};
}

SentryUploader::SentryUploader(
    const std::string& user,
    const std::string& minidmpName,
    const std::string& minidumpPath,
    const std::string& traceName,
    const std::string& tracePath,
    bool               isDev,
    const std::string& leviLaminaVersion
)
: mIsDev(isDev),
  mLeviLaminaVersion(leviLaminaVersion),
  mUser(user),
  mMiniDumpName(minidmpName),
  mMinidumpPath(minidumpPath),
  mTraceName(traceName),
  mTracePath(tracePath) {
    mMinidumpContent       = readFile(minidumpPath);
    mAdditionalFileContent = readFile(tracePath);
    mOSInfo.name           = sys_utils::isWine() ? "Linux(Wine)" : "Windows";
    mOSInfo.version        = sys_utils::getSystemVersion();
}

void SentryUploader::addModSentryInfo(
    const std::string& modName,
    const std::string& dsn,
    const std::string& releaseVersion
) {
    try {
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

        mModsSentryConfig.push_back({info, dsn, modName, releaseVersion});
    } catch (const std::exception& e) {
        sentryLogger->error("Error adding mod sentry info: {}", e.what());
        return;
    }
}

void SentryUploader::uploadAll() {
    std::vector<std::thread> threads;

    threads.reserve(mModsSentryConfig.size());
    sentryLogger->info("Uploading crash report to Sentry...");
    for (const auto& sentryConfig : mModsSentryConfig) {
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
                    {      "level",                                                                        "fatal"},
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
            } catch (const std::exception& e) {
                sentryLogger->error("Error uploading to DSN: {}, Error: {}", sentryConfig.dsn, e.what());
            }
        });
    }

    for (auto& thread : threads) {
        thread.join();
    }
}

std::string SentryUploader::readFile(const std::string& filePath) {
    std::ifstream file(filePath, std::ios::binary);
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file: " + filePath);
    }
    return {std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>()};
}

void SentryUploader::sendToSentry(
    const SentryInfo&     sentryInfo,
    const std::string&    url,
    const nlohmann::json& envelopeHeader,
    const nlohmann::json& eventPayload
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
        sentryLogger->info("Mod: {} uploaded successfully to Sentry", sentryInfo.modName);
        sentryLogger->info("Event ID: {}", to_string(json::parse(response.text)["id"]));
    } else {
        sentryLogger->error("Mod: {} Failed to upload to Sentry", sentryInfo.modName);
        sentryLogger->error("Status Code: {}", response.status_code);
        sentryLogger->error("Response: {}", response.text);
    }
}
} // namespace ll