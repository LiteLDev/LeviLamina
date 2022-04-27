#pragma unmanaged
#include "../Header/Logger.hpp"
#pragma unmanaged
Logger LoggerManager::defaultLogger = Logger("");
#pragma unmanaged
std::unordered_map<LoggerID, std::pair<RefCount, std::unique_ptr<::Logger>>> LoggerManager::LoggerData = {};
#pragma unmanaged
std::tuple<LoggerManager::IsDeleted, LoggerID, Logger*>  LoggerManager::OperatingLogger = { true,0,nullptr };
#pragma unmanaged
std::pair<LoggerID, bool> LoggerManager::CreateLogger(const std::string str)
{
	LoggerID id = do_hash(str.c_str());
	auto& a = LoggerData.insert(std::make_pair(id, std::pair<RefCount, std::unique_ptr<::Logger>>(1, new Logger(str))));
	OperatingLogger = { false,id,a.first->second.second.get() };
	return std::make_pair(id, a.second);
}
#pragma unmanaged
void LoggerManager::WriteLine(LoggerID id, OutputStreamType t, const std::wstring& wstr)
{
	::Logger::OutputStream* pstream = nullptr;
	::Logger* plogger = nullptr;

	//Optimizing
	if (!std::get<0>(OperatingLogger) && id == std::get<1>(OperatingLogger))
	{
		plogger = std::get<2>(OperatingLogger);
		goto jmp;
	}

	{
		auto iter = LoggerData.find(id);
		if (iter != LoggerData.end())
			plogger = iter->second.second.get();
		else
			plogger = &defaultLogger;
		OperatingLogger = { false,id,plogger };
	}

jmp:

	switch (t)
	{
	case LoggerManager::OutputStreamType::debug:
		pstream = &plogger->debug;
		break;
	case LoggerManager::OutputStreamType::info:
		pstream = &plogger->info;
		break;
	case LoggerManager::OutputStreamType::warn:
		pstream = &plogger->warn;
		break;
	case LoggerManager::OutputStreamType::error:
		pstream = &plogger->error;
		break;
	case LoggerManager::OutputStreamType::fatal:
		pstream = &plogger->fatal;
		break;
	default:
		break;
	}
	(*pstream)(wstr);
}
#pragma unmanaged
void LoggerManager::WriteLine(OutputStreamType t, const std::string& str)
{
	::Logger::OutputStream* pstream = nullptr;
	switch (t)
	{
	case LoggerManager::OutputStreamType::debug:
		pstream = &defaultLogger.debug;
		break;
	case LoggerManager::OutputStreamType::info:
		pstream = &defaultLogger.info;
		break;
	case LoggerManager::OutputStreamType::warn:
		pstream = &defaultLogger.warn;
		break;
	case LoggerManager::OutputStreamType::error:
		pstream = &defaultLogger.error;
		break;
	case LoggerManager::OutputStreamType::fatal:
		pstream = &defaultLogger.fatal;
		break;
	default:
		break;
	}
	(*pstream)(str);
}
#pragma unmanaged
void LoggerManager::WriteLine(OutputStreamType t, const std::string str, nullptr_t)
{
	LoggerManager::WriteLine(t, str);
}
#pragma unmanaged
void LoggerManager::DeleteLogger(LoggerID id)
{
	auto iter = LoggerData.find(id);
	if (iter != LoggerData.end())
	{
		--(iter->second.first);
		if (!iter->second.first)//iter->second.first==0
		{
			LoggerData.erase(iter);
		}
	}
	if (!std::get<0>(OperatingLogger) && id == std::get<1>(OperatingLogger))
		OperatingLogger = { true,0,nullptr };
}
#pragma unmanaged
inline void LoggerManager::SetTitle(LoggerID id, const std::string& _title)
{
	::Logger* plogger = nullptr;
	if (!std::get<0>(OperatingLogger) && id == std::get<1>(OperatingLogger))
	{
		plogger = std::get<2>(OperatingLogger);
		goto jmp;
	}

	{
		auto iter = LoggerData.find(id);
		if (iter != LoggerData.end())
			plogger = iter->second.second.get();
		else
			return;
	}

jmp:

	plogger->title = _title;
}
#pragma unmanaged
inline std::string LoggerManager::GetTitle(LoggerID id)
{
	::Logger* plogger = nullptr;
	if (!std::get<0>(OperatingLogger) && id == std::get<1>(OperatingLogger))
	{
		plogger = std::get<2>(OperatingLogger);
		goto jmp;
	}

	{
		auto iter = LoggerData.find(id);
		if (iter != LoggerData.end())
			plogger = iter->second.second.get();
		else
			return std::string("");
	}

jmp:
	return plogger->title;
}
#pragma unmanaged
inline void LoggerManager::tryLock(LoggerID id)
{
	::Logger* plogger = nullptr;
	if (!std::get<0>(OperatingLogger) && id == std::get<1>(OperatingLogger))
	{
		plogger = std::get<2>(OperatingLogger);
		goto jmp;
	}

	{
		auto iter = LoggerData.find(id);
		if (iter != LoggerData.end())
			plogger = iter->second.second.get();
		else
			return;
	}

jmp:

	plogger->tryLock();
}
#pragma unmanaged
inline void LoggerManager::lock(LoggerID id)
{
	::Logger* plogger = nullptr;
	if (!std::get<0>(OperatingLogger) && id == std::get<1>(OperatingLogger))
	{
		plogger = std::get<2>(OperatingLogger);
		goto jmp;
	}

	{
		auto iter = LoggerData.find(id);
		if (iter != LoggerData.end())
			plogger = iter->second.second.get();
		else
			return;
	}

jmp:

	plogger->lock();
}
#pragma unmanaged
inline void LoggerManager::unlock(LoggerID id)
{
	::Logger* plogger = nullptr;
	if (!std::get<0>(OperatingLogger) && id == std::get<1>(OperatingLogger))
	{
		plogger = std::get<2>(OperatingLogger);
		goto jmp;
	}

	{
		auto iter = LoggerData.find(id);
		if (iter != LoggerData.end())
			plogger = iter->second.second.get();
		else
			return;
	}

jmp:

	plogger->unlock();
}
#pragma unmanaged
inline void LoggerManager::setDefaultFile(const std::string& logFile, bool appendMode)
{
	::Logger::setDefaultFile(logFile, appendMode);
}
#pragma unmanaged
inline void LoggerManager::setDefaultFile(std::nullptr_t a0)
{
	::Logger::setDefaultFile(a0);
}
#pragma unmanaged
bool LoggerManager::setFile(LoggerID id, const std::string& logFile, bool appendMode)
{
	::Logger* plogger = nullptr;
	if (!std::get<0>(OperatingLogger) && id == std::get<1>(OperatingLogger))
	{
		plogger = std::get<2>(OperatingLogger);
		goto jmp;
	}

	{
		auto iter = LoggerData.find(id);
		if (iter != LoggerData.end())
			plogger = iter->second.second.get();
		else
			return false;
	}

jmp:
	return plogger->setFile(logFile, appendMode);
}

bool LoggerManager::setFile(LoggerID id, nullptr_t)
{
	::Logger* plogger = nullptr;
	if (!std::get<0>(OperatingLogger) && id == std::get<1>(OperatingLogger))
	{
		plogger = std::get<2>(OperatingLogger);
		goto jmp;
	}

	{
		auto iter = LoggerData.find(id);
		if (iter != LoggerData.end())
			plogger = iter->second.second.get();
		else
			return false;
	}


jmp:
	return plogger->setFile(0);
}





#pragma managed
namespace LLNET::Logger {
	using msclr::interop::marshal_as;

	Logger::Logger(System::String^ title)
	{
		this->id = LoggerManager::CreateLogger(marshalString<Encoding::E_UTF8>(title)).first;
		this->debug = gcnew Logger::OutputStream(OutputStreamType::debug, this->id);
		this->info = gcnew Logger::OutputStream(OutputStreamType::info, this->id);
		this->warn = gcnew Logger::OutputStream(OutputStreamType::warn, this->id);
		this->error = gcnew Logger::OutputStream(OutputStreamType::error, this->id);
		this->fatal = gcnew Logger::OutputStream(OutputStreamType::fatal, this->id);
	}

	Logger::Logger()
	{
		this->id = LoggerManager::CreateLogger("").first;
		this->debug = gcnew Logger::OutputStream(OutputStreamType::debug, this->id);
		this->info = gcnew Logger::OutputStream(OutputStreamType::info, this->id);
		this->warn = gcnew Logger::OutputStream(OutputStreamType::warn, this->id);
		this->error = gcnew Logger::OutputStream(OutputStreamType::error, this->id);
		this->fatal = gcnew Logger::OutputStream(OutputStreamType::fatal, this->id);
	}

	Logger::~Logger()
	{
		LoggerManager::DeleteLogger(this->id);
	}


	Logger::OutputStream::OutputStream(OutputStreamType t, LoggerID loggerid)
		:loggerid(loggerid), type(t), buffer(gcnew List<System::Object^>) {}

	void Logger::OutputStream::WriteLine(System::String^ string)
	{
        LoggerManager::WriteLine(this->loggerid, LoggerManager::OSTYPE(int(type)), marshal_as<std::wstring>(string));
	}
	void Logger::OutputStream::WriteLine(System::String^ format, ...array<System::Object^>^ args)
	{
		auto str = System::String::Format(format, (array<System::Object^>^)args);
        LoggerManager::WriteLine(this->loggerid, LoggerManager::OSTYPE(int(type)), marshal_as<std::wstring>(str));
	}
	void Logger::OutputStream::WriteLine(System::Object^ obj) {
        LoggerManager::WriteLine(this->loggerid, LoggerManager::OSTYPE(int(type)), marshal_as<std::wstring>(obj->ToString()));
	}

	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::Boolean val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::Byte val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::SByte val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::Char val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::Int16 val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::UInt16 val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::Int32 val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::UInt32 val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::Int64 val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::UInt64 val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::Single val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::Double val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::String^ val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, System::Object^ val)
	{
		os->buffer->Add(val);
		return os;
	}
	inline Logger::OutputStream^ Logger::OutputStream::operator<<(OutputStream^ os, ENDLINE endl)
	{
		auto len = os->buffer->Count;

		int ex = 0;
		int _len = len;
		do {
			_len %= 10;
			ex += _len;
		} while (_len > 9);

		auto strbulider = gcnew System::Text::StringBuilder(len * 3 + ex);

		for (int i = 0; i < len; ++i)
		{
			strbulider->Append("{" + i.ToString() + "}");
		}
		try
		{
			os->WriteLine(strbulider->ToString(), os->buffer->ToArray());
		}
		catch (System::Exception^ e)
		{
			auto name = Assembly::GetCallingAssembly()->GetName()->Name;
			LoggerManager::WriteLine(LoggerManager::OutputStreamType::error, "", nullptr);
			System::Console::ForegroundColor = System::ConsoleColor::Red;
			System::Console::WriteLine("   Uncaught System.Exception Detected!\n   In Plugin:{0}\n   Info:{1}", name, e->ToString());
			System::Console::ForegroundColor = System::ConsoleColor::White;
		}
		finally 
		{
			delete strbulider;
			delete os->buffer;
			os->buffer = gcnew List<System::Object^>;
		}
		return os;
	}

	inline System::String^ Logger::title::get() {
		return marshalString<Encoding::E_UTF8>(LoggerManager::GetTitle(id));
	}

	inline void Logger::title::set(System::String^ _title) {
		LoggerManager::SetTitle(id, marshalString<Encoding::E_UTF8>(_title));
	}

}



