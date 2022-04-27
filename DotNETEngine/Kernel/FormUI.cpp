#include "../Header/FormUI.hpp"

namespace LLNET::Form
{
inline Button::Button(System::String ^ text, System::String ^ image, ButtonCallback ^ callback)
    : text(text)
    , image(image)
    , callback(callback)
{
}

inline Button::Button(System::String ^ text, System::String ^ image)
    : text(text)
    , image(image)
    , callback(nullptr)
{
}

inline Button::Button(System::String ^ text)
    : text(text)
    , image("")
    , callback(nullptr)
{
}

inline Button::~Button()
{
    if (gch.IsAllocated)
    {
        gch.Free();
    }
}

inline void Button::setText(System::String ^ _text)
{
    this->text = _text;
}
inline void Button::setImage(System::String ^ _image)
{
    this->image = _image;
}
inline void Button::setCallback(ButtonCallback ^ _callback)
{
    this->callback = _callback;
}

void NATIVECALLBACK Button::callbackfunc(::Player* p)
{
    try
    {
        callback(gcnew MC::Player(p));
    }
    CATCH
}

Button::NativeCallback Button::ToNativeCallback()
{
    if (callback == nullptr)
        return NativeCallback();
    auto de_callback = gcnew _ButtonCallback(this, &Button::callbackfunc);
    gch = GCHandle::Alloc(de_callback);
    auto pfunc = static_cast<NativeCallback>(
        Marshal::GetFunctionPointerForDelegate(de_callback).ToPointer());
    return pfunc;
}

inline void CustomFormElement::setName(System::String ^ _name)
{
    this->name = _name;
}

inline System::String ^ CustomFormElement::getString()
{
    return this->value;
}

inline int CustomFormElement::getNumber()
{
    return System::Convert::ToInt32(value);
}

bool CustomFormElement::getBool()
{
    if (System::String::IsNullOrEmpty(value) || value == "0" || value == "false" || value == "False" || value == "FALSE")
        return false;
    return true;
}


inline Label::Label(System::String ^ name, System::String ^ text)
    : text(text)
{
    setName(name);
}

inline Label::Type Label::getType()
{
    return Type::Label;
}

inline void Label::setText(System::String ^ _text)
{
    this->text = _text;
}


inline Input::Input(System::String ^ name, System::String ^ title, System::String ^ placeholder, System::String ^ def)
    : title(title)
    , placeholder(placeholder)
    , def(def)
{
    setName(name);
}

inline Input::Input(System::String ^ name, System::String ^ title, System::String ^ placeholder)
    : title(title)
    , placeholder(placeholder)
    , def("")
{
    setName(name);
}

inline Input::Input(System::String ^ name, System::String ^ title)
    : title(title)
    , placeholder("")
    , def("")
{
    setName(name);
}

inline Input::Type Input::getType()
{
    return Type::Input;
}

inline void Input::setTitle(System::String ^ _title)
{
    this->title = _title;
}

inline void Input::setPlaceHolder(System::String ^ _placeholder)
{
    this->placeholder = _placeholder;
}

inline void Input::setDefault(System::String ^ _def)
{
    this->def = _def;
}


inline Toggle::Toggle(System::String ^ name, System::String ^ title, bool def)
    : title(title)
    , def(def)
{
    setName(name);
}

inline Toggle::Toggle(System::String ^ name, System::String ^ title)
    : title(title)
    , def(false)
{
    setName(name);
}

inline Toggle::Type Toggle::getType()
{
    return Type::Toggle;
}

inline void Toggle::setTitle(System::String ^ _title)
{
    this->title = _title;
}

inline void Toggle::setDefault(bool _def)
{
    this->def = _def;
}


inline Dropdown::Dropdown(System::String ^ name, System::String ^ title, List<System::String ^> ^ options, int defId)
    : title(title)
    , options(options)
    , def(defId)
{
    setName(name);
}

inline Dropdown::Dropdown(System::String ^ name, System::String ^ title, List<System::String ^> ^ options)
    : title(title)
    , options(options)
    , def(0)
{
    setName(name);
}

inline Dropdown::Type Dropdown::getType()
{
    return Type::Dropdown;
}

inline void Dropdown::setTitle(System::String ^ _title)
{
    this->title = _title;
}

inline void Dropdown::setOptions(List<System::String ^> ^ _options)
{
    this->options = _options;
}

inline void Dropdown::addOption(System::String ^ option)
{
    if (options != nullptr) options->Add(option);
}

inline void Dropdown::setDefault(int defId)
{
    this->def = defId;
}


inline Slider::Slider(System::String ^ name, System::String ^ title, int min, int max, int step, int def)
    : title(title)
    , min(min)
    , max(max)
    , step(step)
    , def(def)
{
    setName(name);
}

inline Slider::Slider(System::String ^ name, System::String ^ title, int min, int max, int step)
    : title(title)
    , min(min)
    , max(max)
    , step(step)
    , def(0)
{
    setName(name);
}

inline Slider::Slider(System::String ^ name, System::String ^ title, int min, int max)
    : title(title)
    , min(min)
    , max(max)
    , step(1)
    , def(0)
{
    setName(name);
}

inline Slider::Type Slider::getType()
{
    return Type::Slider;
}

inline void Slider::setTitle(System::String ^ _title)
{
    this->title = _title;
}

inline void Slider::setMin(int _min)
{
    this->min = _min;
}

inline void Slider::setMax(int _max)
{
    this->max = _max;
}

inline void Slider::setStep(int _step)
{
    this->step = _step;
}

inline void Slider::setDefault(int _def)
{
    this->def = _def;
}


inline StepSlider::StepSlider(System::String ^ name, System::String ^ title, List<System::String ^> ^ options, int defId)
    : title(title)
    , options(options)
    , def(defId)
{
    setName(name);
}

inline StepSlider::StepSlider(System::String ^ name, System::String ^ title, List<System::String ^> ^ options)
    : title(title)
    , options(options)
    , def(0)
{
    setName(name);
}

inline StepSlider::Type StepSlider::getType()
{
    return Type::StepSlider;
}

inline void StepSlider::setTitle(System::String ^ _title)
{
    this->title = _title;
}

inline void StepSlider::setOptions(List<System::String ^> ^ _options)
{
    this->options = _options;
}

inline void StepSlider::addOption(System::String ^ option)
{
    if (options != nullptr) options->Add(option);
}

inline void StepSlider::setDefault(int defId)
{
    this->def = defId;
}


SimpleForm::SimpleForm(System::String ^ title, System::String ^ content)
    : title(title)
    , content(content)
{
    elements = gcnew List<SimpleFormElement ^>;
    gchList = gcnew List<GCHandle>;
}

inline SimpleForm ^ SimpleForm::append(Button ^ element)
{
    elements->Add((SimpleFormElement ^) element);
    return this;
}

inline SimpleForm ^ SimpleForm::setTitle(System::String ^ title)
{
    this->title = title;
    return this;
}

inline SimpleForm ^ SimpleForm::cstContent(System::String ^ content)
{
    this->content = content;
    return this;
}

inline SimpleForm ^ SimpleForm::addButton(System::String ^ text, System::String ^ image, Button::ButtonCallback ^ callback)
{
    return append(gcnew Button(text, image, callback));
}

inline SimpleForm ^ SimpleForm::addButton(System::String ^ text, System::String ^ image)
{
    return append(gcnew Button(text, image));
}

inline SimpleForm ^ SimpleForm::addButton(System::String ^ text)
{
    return append(gcnew Button(text));
}

bool SimpleForm::sendTo(MC::Player ^ _player, Callback ^ _callback)
{
    callback = _callback == nullptr ? callback : _callback;
    typedef void (*FnPtr)(::Player*, int);
    ::Form::SimpleForm::Callback pfunc = nullptr;
    if (callback == nullptr)
    {
        pfunc = ::Form::SimpleForm::Callback();
        goto null;
    }
    auto defunc = gcnew _Callback(this, &SimpleForm::sendToFunc);
    gchList->Add(GCHandle::Alloc(defunc));
    pfunc = static_cast<FnPtr>(
        Marshal::GetFunctionPointerForDelegate(defunc).ToPointer());
null:
    ::Form::SimpleForm simpleform(marshalString<Encoding::E_UTF8>(title), marshalString<Encoding::E_UTF8>(content));
    for each (auto var in elements)
    {
        auto _var = ((Button ^) var);
        ::Form::Button button(marshalString<Encoding::E_UTF8>(_var->text), marshalString<Encoding::E_UTF8>(_var->image), _var->ToNativeCallback());
        simpleform.append(button);
    }

    return simpleform.sendTo(_player->NativePtr, pfunc);
}

inline bool SimpleForm::sendTo(MC::Player ^ player)
{
    ::Form::SimpleForm simpleform(marshalString<Encoding::E_UTF8>(title), marshalString<Encoding::E_UTF8>(content));
    return sendTo(player, nullptr);
}

SimpleForm::~SimpleForm()
{
    for each (GCHandle % var in gchList)
    {
        if (var.IsAllocated)
        {
            var.Free();
        }
    }
    delete elements;
    delete callback;
    delete gchList;
}

inline void NATIVECALLBACK SimpleForm::sendToFunc(::Player* p, int a)
{
    try
    {
        callback(gcnew MC::Player(p), a);
    }
    CATCH
}

CustomForm::CustomForm(System::String ^ title)
    : title(title)
{
    elements = gcnew List<kvPair>;
}

inline CustomForm ^ CustomForm::append(CustomFormElement ^ element)
{
    isFormGenerated = false;
    isDictionaryGenerated = false;
    elements->Add(kvPair(element->name, element));
    return this;
}

CustomForm::~CustomForm()
{
    delete nativeform;
    for each (GCHandle % var in gchList)
    {
        if (var.IsAllocated)
        {
            var.Free();
        }
    }
    delete gchList;
    delete elements;
    delete callback;
    delete CallbackDictionary;
}

void NATIVECALLBACK CustomForm::sendFunc(::Player* p, std::map<string, std::shared_ptr<::Form::CustomFormElement>> arg)
{

    if (!isDictionaryGenerated || CallbackDictionary == nullptr)
    {
        CallbackDictionary = gcnew Dictionary<System::String ^, CustomFormElement ^>;
        isDictionaryGenerated = true;

        for (auto iter = arg.begin(); iter != arg.end(); ++iter)
        {
            switch (iter->second->getType())
            {
                case ::Form::CustomFormElement::Type::Label:
                {
                    auto label = gcnew Label(
                        marshalString<Encoding::E_UTF8>(((::Form::Label*)iter->second.get())->name),
                        marshalString<Encoding::E_UTF8>(((::Form::Label*)iter->second.get())->text));
                    CallbackDictionary->Add(marshalString<Encoding::E_UTF8>(iter->first), label);
                }
                break;
                case ::Form::CustomFormElement::Type::Input:
                {
                    auto input = gcnew Input(
                        marshalString<Encoding::E_UTF8>(((::Form::Input*)iter->second.get())->name),
                        marshalString<Encoding::E_UTF8>(((::Form::Input*)iter->second.get())->title),
                        marshalString<Encoding::E_UTF8>(((::Form::Input*)iter->second.get())->placeholder),
                        marshalString<Encoding::E_UTF8>(((::Form::Input*)iter->second.get())->def));
                    CallbackDictionary->Add(marshalString<Encoding::E_UTF8>(iter->first), input);
                }
                break;
                case ::Form::CustomFormElement::Type::Toggle:
                {
                    auto toggle = gcnew Toggle(
                        marshalString<Encoding::E_UTF8>(((::Form::Toggle*)iter->second.get())->name),
                        marshalString<Encoding::E_UTF8>(((::Form::Toggle*)iter->second.get())->title),
                        ((::Form::Toggle*)iter->second.get())->def);
                    CallbackDictionary->Add(marshalString<Encoding::E_UTF8>(iter->first), toggle);
                }
                break;
                case ::Form::CustomFormElement::Type::Dropdown:
                {
                    auto dropdownSysList = gcnew List<System::String ^>;
                    for each (auto& var in ((::Form::Dropdown*)iter->second.get())->options)
                        dropdownSysList->Add(marshalString<Encoding::E_UTF8>(var));
                    auto dropdown = gcnew Dropdown(
                        marshalString<Encoding::E_UTF8>(((::Form::Dropdown*)iter->second.get())->name),
                        marshalString<Encoding::E_UTF8>(((::Form::Dropdown*)iter->second.get())->title),
                        dropdownSysList,
                        ((::Form::Dropdown*)iter->second.get())->def);
                    CallbackDictionary->Add(marshalString<Encoding::E_UTF8>(iter->first), dropdown);
                }
                break;
                case ::Form::CustomFormElement::Type::Slider:
                {
                    auto slider = gcnew Slider(
                        marshalString<Encoding::E_UTF8>(((::Form::Slider*)iter->second.get())->name),
                        marshalString<Encoding::E_UTF8>(((::Form::Slider*)iter->second.get())->title),
                        ((::Form::Slider*)iter->second.get())->minValue,
                        ((::Form::Slider*)iter->second.get())->maxValue,
                        ((::Form::Slider*)iter->second.get())->step,
                        ((::Form::Slider*)iter->second.get())->def);
                    CallbackDictionary->Add(marshalString<Encoding::E_UTF8>(iter->first), slider);
                }
                break;
                case ::Form::CustomFormElement::Type::StepSlider:
                {
                    auto stepsliderSysList = gcnew List<System::String ^>;
                    for each (auto& var in ((::Form::StepSlider*)iter->second.get())->options)
                        stepsliderSysList->Add(marshalString<Encoding::E_UTF8>(var));
                    auto stepslider = gcnew StepSlider(
                        marshalString<Encoding::E_UTF8>(((::Form::StepSlider*)iter->second.get())->name),
                        marshalString<Encoding::E_UTF8>(((::Form::StepSlider*)iter->second.get())->title),
                        stepsliderSysList,
                        ((::Form::StepSlider*)iter->second.get())->def);
                    CallbackDictionary->Add(marshalString<Encoding::E_UTF8>(iter->first), stepslider);
                }
                break;
            }
        }
    }
    if (callback != nullptr)
    {
        try
        {
            callback(gcnew MC::Player(p), CallbackDictionary);
        }
        CATCH
    }
}

bool CustomForm::sendTo(MC::Player ^ player, Callback ^ _callback)
{
    callback = _callback;
    if (gchList == nullptr) gchList = gcnew List<GCHandle>;

    auto defunc = gcnew de_sendFunc(this, &CustomForm::sendFunc);
    gchList->Add(GCHandle::Alloc(defunc));

    ::Form::CustomForm::Callback _callback_ = (callback == nullptr ? ::Form::CustomForm::Callback() : static_cast<void (*)(::Player*, std::map<string, std::shared_ptr<::Form::CustomFormElement>>)>(Marshal::GetFunctionPointerForDelegate(defunc).ToPointer()));

    if (!isFormGenerated || nativeform == nullptr)
    {
        delete nativeform;
        nativeform = nullptr;
        nativeform = GenerateNativeForm();
        isFormGenerated = true;
    }
    return nativeform->sendTo(((::ServerPlayer*)(::Player*)player->NativePtr), _callback_);
}

::Form::CustomForm* CustomForm::GenerateNativeForm()
{

    auto ret = new ::Form::CustomForm(marshalString<Encoding::E_UTF8>(title));
    for each (auto var in elements)
    {
        auto p = var.Value;
        switch (p->getType())
        {
            case Form::CustomFormElement::Type::Label:
                ret->append(::Form::Label(
                    marshalString<Encoding::E_UTF8>(((Label ^) p)->name),
                    marshalString<Encoding::E_UTF8>(((Label ^) p)->text)));
                break;
            case Form::CustomFormElement::Type::Input:
                ret->append(::Form::Input(
                    marshalString<Encoding::E_UTF8>(((Input ^) p)->name),
                    marshalString<Encoding::E_UTF8>(((Input ^) p)->title),
                    marshalString<Encoding::E_UTF8>(((Input ^) p)->placeholder),
                    marshalString<Encoding::E_UTF8>(((Input ^) p)->def)));
                break;
            case Form::CustomFormElement::Type::Toggle:
                ret->append(::Form::Toggle(
                    marshalString<Encoding::E_UTF8>(((Toggle ^) p)->name),
                    marshalString<Encoding::E_UTF8>(((Toggle ^) p)->title),
                    ((Toggle ^) p)->def));
                break;
            case Form::CustomFormElement::Type::Dropdown:
            {
                std::vector<std::string> stdvector(((Dropdown ^) p)->options->Count);
                for (int i = 0, len = ((Dropdown ^) p)->options->Count; i < len; ++i)
                    stdvector[i] = std::move(marshalString<Encoding::E_UTF8>(((Dropdown ^) p)->options[i]));
                ret->append(::Form::Dropdown(
                    marshalString<Encoding::E_UTF8>(((Dropdown ^) p)->name),
                    marshalString<Encoding::E_UTF8>(((Dropdown ^) p)->title),
                    stdvector,
                    ((Dropdown ^) p)->def));
            }
            break;
            case Form::CustomFormElement::Type::Slider:
                ret->append(::Form::Slider(
                    marshalString<Encoding::E_UTF8>(((Slider ^) p)->name),
                    marshalString<Encoding::E_UTF8>(((Slider ^) p)->title),
                    ((Slider ^) p)->min,
                    ((Slider ^) p)->max,
                    ((Slider ^) p)->step,
                    ((Slider ^) p)->def));
                break;
            case Form::CustomFormElement::Type::StepSlider:
            {
                std::vector<std::string> stdvector(((StepSlider ^) p)->options->Count);
                for (int i = 0, len = ((StepSlider ^) p)->options->Count; i < len; ++i)
                    stdvector[i] = std::move(marshalString<Encoding::E_UTF8>(((StepSlider ^) p)->options[i]));
                ret->append(::Form::StepSlider(
                    marshalString<Encoding::E_UTF8>(((StepSlider ^) p)->name),
                    marshalString<Encoding::E_UTF8>(((StepSlider ^) p)->title),
                    stdvector,
                    ((StepSlider ^) p)->def));
            }
            break;
            default:
                break;
        }
    }
    return ret;
}

inline bool CustomForm::sendTo(MC::Player ^ player)
{
    return sendTo(player, nullptr);
}

inline CustomFormElement::Type CustomForm::getType(int index)
{
    return CustomFormElement::Type(elements[index].Value->getType());
}

inline System::String ^ CustomForm::getString(System::String const ^ name)
{
    for each (auto % var in elements)
    {
        if (var.Key == name)
        {
            return var.Value->getString();
        }
    }
    return "";
}
inline int CustomForm::getNumber(System::String const ^ name)
{
    for each (auto % var in elements)
    {
        if (var.Key == name)
        {
            return var.Value->getNumber();
        }
    }
    return 0;
}
inline bool CustomForm::getBool(System::String const ^ name)
{
    for each (auto % var in elements)
    {
        if (var.Key == name)
        {
            return var.Value->getBool();
        }
    }
    return false;
}
inline System::String ^ CustomForm::getString(int index)
{
    return elements[index].Value->getString();
}
inline int CustomForm::getNumber(int index)
{
    return elements[index].Value->getNumber();
}
inline bool CustomForm::getBool(int index)
{
    return elements[index].Value->getBool();
}

inline void CustomForm::setValue(int index, System::String ^ value)
{
    elements[index].Value->value = value;
}
} // namespace LLNET::Form
