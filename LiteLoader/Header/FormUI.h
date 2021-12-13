#pragma once
#include "../Global.h"

class ServerPlayer;

namespace Form
{
	//////////////////////////////// Simple Form Elements ////////////////////////////////

	class SimpleFormElement
	{
	protected:
		virtual string serialize() = 0;
		friend class SimpleForm;
	};

	class Button : public SimpleFormElement
	{
	protected:
		LIAPI virtual string serialize() override;

	public:
		using ButtonCallback = std::function<void(void)>;

		string text, image;
		ButtonCallback callback;

	public:
		inline Button(const string& text, const string& image = "", ButtonCallback callback = ButtonCallback())
			:text(text), image(image), callback(callback)
		{}
		inline void setText(const string& text) { this->text = text; }
		inline void setImage(const string& image) { this->image = image; }
		inline void setCallback(ButtonCallback callback) { this->callback = callback; }
	};

	//////////////////////////////// Custom Form Elements ////////////////////////////////

	class CustomFormElement
	{
	protected:
		LIAPI virtual string serialize() = 0;
		friend class CustomForm;
	public:
		enum class Type { Label, Input, Toggle, Dropdown, Slider, StepSlider };

		string name;
		Type type;
		inline void setName(const string& name) { this->name = name; }
		inline virtual Type getType() = 0;
	};

	class Label : public CustomFormElement
	{
	protected:
		LIAPI virtual string serialize() override;
	public:
		using DataType = void*;
		string text;

	public:
		inline Label(const string& name, const string& text)
			:text(text)
		{
			setName(name);
		}
		inline virtual Type getType() override { return Type::Label; }
		inline void setText(const string& text) { this->text = text; }
		inline DataType getData() { return nullptr; }
	};

	class Input : public CustomFormElement
	{
	protected:
		LIAPI virtual string serialize() override;
	public:
		using DataType = std::string;
		string title, placeholder, def, data;

		inline Input(const string& name, const string& title, const string& placeholder = "", const string& def = "")
			:title(title), placeholder(placeholder), def(def)
		{
			setName(name);
		}
		inline virtual Type getType() override { return Type::Input; }
		inline void setTitle(const string& title) { this->title = title; }
		inline void setPlaceHolder(const string& placeholder) { this->placeholder = placeholder; }
		inline void setDefault(const string& def) { this->def = def; }
		inline DataType getData() { return data; }
	};

	class Toggle : public CustomFormElement
	{
	protected:
		LIAPI virtual string serialize() override;
	public:
		using DataType = bool;
		string title;
		bool def, data;
		
	public:
		inline Toggle(const string& name, const string& title, bool def = false)
			:title(title), def(def)
		{
			setName(name);
		}
		inline virtual Type getType() override { return Type::Toggle; }
		inline void setTitle(const string& title) { this->title = title; }
		inline void setDefault(bool def) { this->def = def; }
		inline DataType getData() { return data; }
	};

	class Dropdown : public CustomFormElement
	{
	protected:
		LIAPI virtual string serialize() override;
	public:
		using DataType = int;
		string title;
		vector<string> options;
		int def, data;

	public:
		inline Dropdown(const string& name, const string& title, const vector<string> &options, int defId = 0)
			:title(title), options(options), def(defId)
		{
			setName(name);
		}
		inline virtual Type getType() override { return Type::Dropdown; }
		inline void setTitle(const string& title) { this->title = title; }
		inline void setOptions(const vector<string>& options) { this->options = options; }
		inline void addOption(const string& option) { options.push_back(option); }
		inline void setDefault(int defId) { this->def = defId; }
		inline DataType getData() { return data; }
	};

	class Slider : public CustomFormElement
	{
	protected:
		LIAPI virtual string serialize() override;
	public:
		using DataType = int;
		string title;
		int min, max, step, def, data;

	public:
		inline Slider(const string& name, const string& title, int min, int max, int step = 1, int def = 0)
			:title(title), min(min), max(max), step(step), def(def)
		{
			setName(name);
		}
		inline virtual Type getType() override { return Type::Slider; }
		inline void setTitle(const string& title) { this->title = title; }
		inline void setMin(int min) { this->min = min; }
		inline void setMax(int max) { this->max = max; }
		inline void setStep(int step) { this->step = step; }
		inline void setDefault(int def) { this->def = def; }
		inline DataType getData() { return data; }
	};

	class StepSlider : public CustomFormElement
	{
	protected:
		LIAPI virtual string serialize() override;
	public:
		using DataType = int;
		string title;
		vector<string> options;
		int def, data;

	public:
		inline StepSlider(const string& name, const string& title, const vector<string>& options, int defId = 0)
			:title(title), options(options), def(defId)
		{
			setName(name);
		}
		inline virtual Type getType() override { return Type::StepSlider; }
		inline void setTitle(const string& title) { this->title = title; }
		inline void setOptions(const vector<string>& options) { this->options = options; }
		inline void addOption(const string& option) { options.push_back(option); }
		inline void setDefault(int defId) { this->def = defId; }
		inline DataType getData() { return data; }
	};

	//////////////////////////////// Forms ////////////////////////////////

	class FormImpl
	{
	protected:
		//fifo_json json;
		virtual string serialize() = 0;
	};

	class SimpleForm : public FormImpl
	{
	protected:
		LIAPI virtual string serialize() override;

	public:
		using Callback = std::function<void(int)>;
		string title, content;
		vector<std::shared_ptr<SimpleFormElement>> elements;
		Callback callback;

	public:
		SimpleForm(const string& title, const string& content)
			:title(title), content(content)
		{ }

		template <typename T, typename... Args>
		SimpleForm(const string& title, const string& content, T element, Args... args)
		{
			append(element);
			SimpleForm(title, content, args...);
		}

		LIAPI SimpleForm& setTitle(const string& title);
		LIAPI SimpleForm& setContent(const string& content);
		LIAPI SimpleForm& append(const Button &element);
		LIAPI bool sendTo(ServerPlayer* player, Callback callback = Callback());
	};

	class CustomForm : public FormImpl
	{
	private:
		std::vector<std::string> dataInfo;
	protected:
		LIAPI virtual string serialize() override;

	public:
		using Callback = std::function<void(const std::map<string, std::shared_ptr<CustomFormElement>>&)>;
		string title;
		std::map<string, std::shared_ptr<CustomFormElement>> elements;
		Callback callback;

	public:
		CustomForm(const string& title)
			:title(title)
		{ }

		template <typename T, typename... Args>
		CustomForm(const string& title, T element, Args... args)
		{
			append(element);
			CustomForm(title, args...);
		}
		
		LIAPI CustomForm& setTitle(const string& title);
		LIAPI CustomForm& append(const Label& element);
		LIAPI CustomForm& append(const Input& element);
		LIAPI CustomForm& append(const Toggle& element);
		LIAPI CustomForm& append(const Dropdown& element);
		LIAPI CustomForm& append(const Slider& element);
		LIAPI CustomForm& append(const StepSlider& element);
		LIAPI bool sendTo(ServerPlayer* player, Callback callback);
		
		template<typename T,typename DataType>
		inline DataType getData(string name)
		{
			return std::dynamic_pointer_cast<T>(elements[name])->getData();
		}

		template<typename T, typename DataType>
		inline DataType getData(int index)
		{
			return std::dynamic_pointer_cast<T>(elements[dataInfo[index]])->getData();
		}

		inline CustomFormElement::Type getType(int index)
		{
			return elements[dataInfo[index]]->getType();
		}

		template<typename T, typename DataType>
		inline void setData(int index, DataType data)
		{
			std::dynamic_pointer_cast<T>(elements[dataInfo[index]])->data = data;
		}
	};
}