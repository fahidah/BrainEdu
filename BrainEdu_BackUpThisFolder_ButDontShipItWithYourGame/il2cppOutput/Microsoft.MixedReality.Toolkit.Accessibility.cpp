#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>
struct MRTKSubsystemProvider_1_tB371419EF843AD3E9F67D19E52F66F9852B1CEC4;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>
struct MRTKSubsystemProvider_1_t04FEED85CA4E818499C335F753CB85F944E34B28;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>
struct MRTKSubsystem_3_tEAD14DC13CD09761D9CE1704E1D40B24E6009F76;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tE6FDC5BABF26F1EE2745876E04C31BB49548DED3;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemWithProvider_3_t8C9B7AC3FEA97AB78315CD7A21C52D63EE94345E;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem
struct AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig
struct AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor
struct AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// Microsoft.MixedReality.Toolkit.BaseSubsystemConfig
struct BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject
struct DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem
struct MRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility
struct TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider
struct Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01;
// Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider
struct AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilityUtilities_tFAA889699821BD03A832D5E3343203DEC9016D1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0514B8E4342F7B936BE02120037C20832C1C2F20;
IL2CPP_EXTERN_C String_t* _stringLiteral680D5F85FF107897716444439FE6176166BED070;
IL2CPP_EXTERN_C String_t* _stringLiteral8B158F9A3667630BBA0D7A4DB24E6105065433E7;
IL2CPP_EXTERN_C String_t* _stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7;
IL2CPP_EXTERN_C String_t* _stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8;
IL2CPP_EXTERN_C String_t* _stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F;
IL2CPP_EXTERN_C const RuntimeMethod* AccessibilitySubsystemCinfo_GetHashCode_m8D1F75352A7A0CB6E48B9469359BDB148F0EBC7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AccessibilitySubsystemDescriptor_Create_m75334681116E53549EA72B6C041AFB4FBDFA2BCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemProvider_1__ctor_m449DE740CB466CBCE9CAC88E814BE4E339A549E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystem_3__ctor_m8B4D570C7E394A11065FCE479C0350718BA78B1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m71AF764A1B4F8B20ECD5A5F3F9D308C3B0ED6E8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_TisProvider_tFA38277C1A745937FCB6524003B71D37D3C89D01_m234C7B7148319173C58CB25B3240353D649FCFD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_m34E972FD0A5631DA8856DEC9F93FCF7C242AF0D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_m2E724CCB4550C6D5FD259FD419FFE29DC6FEBAF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m120E651FE911BCDF70BB783C0262A1BAC9A6CEC1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC38657BFC808AAD760C9BA2AEF175BE78A17F3A9 
{
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tE6FDC5BABF26F1EE2745876E04C31BB49548DED3  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>
struct SubsystemProvider_1_t56EDE07230A9A47A8E85F64112091EAF70F73239  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemWithProvider_3_t8C9B7AC3FEA97AB78315CD7A21C52D63EE94345E  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
struct AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E 
{
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_2;
	// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<ProviderType>k__BackingField
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<SubsystemTypeOverride>k__BackingField
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
struct AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField_0;
	char* ___U3CDisplayNameU3Ek__BackingField_1;
	char* ___U3CAuthorU3Ek__BackingField_2;
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
struct AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField_0;
	Il2CppChar* ___U3CDisplayNameU3Ek__BackingField_1;
	Il2CppChar* ___U3CAuthorU3Ek__BackingField_2;
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>
struct MRTKSubsystemProvider_1_tB371419EF843AD3E9F67D19E52F66F9852B1CEC4  : public SubsystemProvider_1_t56EDE07230A9A47A8E85F64112091EAF70F73239
{
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor
struct AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A  : public SubsystemDescriptorWithProvider_2_tE6FDC5BABF26F1EE2745876E04C31BB49548DED3
{
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_5;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC  : public SubsystemWithProvider_3_t8C9B7AC3FEA97AB78315CD7A21C52D63EE94345E
{
};

struct MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___FixedUpdatePerfMarker_6;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider
struct Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01  : public MRTKSubsystemProvider_1_tB371419EF843AD3E9F67D19E52F66F9852B1CEC4
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem
struct AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212  : public MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Microsoft.MixedReality.Toolkit.BaseSubsystemConfig
struct BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider
struct AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97  : public Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01
{
	// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::<Config>k__BackingField
	AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* ___U3CConfigU3Ek__BackingField_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::invertTextColor
	bool ___invertTextColor_2;
	// System.Action`1<System.Boolean> Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::InvertTextColorChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___InvertTextColorChanged_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig
struct AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9  : public BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::invertTextColor
	bool ___invertTextColor_4;
};

// Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem
struct MRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD  : public AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject
struct DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::contents
	String_t* ___contents_4;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::contentSummary
	String_t* ___contentSummary_5;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::description
	String_t* ___description_6;
	// Microsoft.MixedReality.Toolkit.Accessibility.DescribableFlag Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::flags
	int32_t ___flags_7;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::instructions
	String_t* ___instructions_8;
	// Microsoft.MixedReality.Toolkit.Accessibility.ComponentRole Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::role
	int32_t ___role_9;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::semantic
	String_t* ___semantic_10;
};

// Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility
struct TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::accessibilitySubsystem
	AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* ___accessibilitySubsystem_4;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystem_3__ctor_mA74FBF58ED7ECF4D6901C5C5AE599CD48E5E2634_gshared (MRTKSubsystem_3_tEAD14DC13CD09761D9CE1704E1D40B24E6009F76* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemProvider_1__ctor_mCA2C3C05DD905908E089B5197C76CDB5FCF0D4D9_gshared (MRTKSubsystemProvider_1_t04FEED85CA4E818499C335F753CB85F944E34B28* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<System.Object,System.Object>(System.String,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m2706E5AA1DF10A4EA82992124656400817D8861D_gshared (String_t* ___name0, Type_t* ___subsystemTypeOverride1, Type_t* ___providerType2, const RuntimeMethod* method) ;
// CinfoT Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::ConstructCinfo<System.Object,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E XRSubsystemHelpers_ConstructCinfo_TisRuntimeObject_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_mE573AFA052C6F6C2BF845C092BBFE9964B846161_gshared (const RuntimeMethod* method) ;
// ConfigT Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetConfiguration<System.Object,System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRSubsystemHelpers_GetConfiguration_TisRuntimeObject_TisRuntimeObject_m5730AF6C890172F577945B3842F17892126B6039_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetFirstRunningSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRSubsystemHelpers_GetFirstRunningSubsystem_TisRuntimeObject_m2A1767880A39EC8FE90272CF9D154FEDAAC7ECE6_gshared (const RuntimeMethod* method) ;

// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>::.ctor()
inline void MRTKSubsystem_3__ctor_m8B4D570C7E394A11065FCE479C0350718BA78B1A (MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC*, const RuntimeMethod*))MRTKSubsystem_3__ctor_mA74FBF58ED7ECF4D6901C5C5AE599CD48E5E2634_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>::get_provider()
inline Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline (SubsystemWithProvider_3_t8C9B7AC3FEA97AB78315CD7A21C52D63EE94345E* __this, const RuntimeMethod* method)
{
	return ((  Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* (*) (SubsystemWithProvider_3_t8C9B7AC3FEA97AB78315CD7A21C52D63EE94345E*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* AccessibilitySubsystemDescriptor_Create_m75334681116E53549EA72B6C041AFB4FBDFA2BCF (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___cinfo0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_mBCFAF0DE737C77AC4558C27771B36354A028ED9F (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___descriptor0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>::.ctor()
inline void MRTKSubsystemProvider_1__ctor_m449DE740CB466CBCE9CAC88E814BE4E339A549E5 (MRTKSubsystemProvider_1_tB371419EF843AD3E9F67D19E52F66F9852B1CEC4* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemProvider_1_tB371419EF843AD3E9F67D19E52F66F9852B1CEC4*, const RuntimeMethod*))MRTKSubsystemProvider_1__ctor_mCA2C3C05DD905908E089B5197C76CDB5FCF0D4D9_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseSubsystemConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSubsystemConfig__ctor_m66121F19C6B007FBB7035AD63440E3DFF202C190 (BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A* __this, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_mF53C471575B6B9CDB142D579D4D1E970498393C3_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_DisplayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_mCA7BFEFB89A9D22D0B0516361322C21DF7744E11_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mAB1EB47A2BFA9FB5AD625A65220F6633FC6FBBBA_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Author()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_m0FC77D7F0CA355968A0C20B3621E30095050D2AE_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Author(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m8BD58AAE1204CF5383890839A16F5F84826172EC_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ConfigType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m1B0C4660573089FADB145C06C75C9AD371FDC6AB_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ConfigType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_mBD52A99DFC763457583F688A894BA6CA3B4D624D_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ProviderType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ProviderType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_m67F5E1C4C10FCEDB6B85FD38AB6311EF59529BAA_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_SubsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mC07BEB328EC7012632E2DA5144B6E65FF3C48A7D_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m573E0F70BC70EA62DF761CFDA0B6E0C763081502 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___other0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_mF4BE2D142B25D5F6E1C0057E4FB0C7F7D35BBC49 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::op_Equality(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Equality_mC0577F5F24558A59D07D1013E33220DBC3C797DF (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___lhs0, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___rhs1, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AccessibilitySubsystemCinfo_GetHashCode_m8D1F75352A7A0CB6E48B9469359BDB148F0EBC7C (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m71AF764A1B4F8B20ECD5A5F3F9D308C3B0ED6E8C (SubsystemDescriptorWithProvider_2_tE6FDC5BABF26F1EE2745876E04C31BB49548DED3* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tE6FDC5BABF26F1EE2745876E04C31BB49548DED3*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Name_mE2323A32E62269C730B7F3C8901F9DC81A8422F1 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_mCB70695169A969F148278794C6D35B37CAB6718F_inline (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Author(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_mE5DD5C82C19A2A8704F58AF48C9CBD7C59F77409_inline (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ProviderType_m03E7207FF62BC755E1EAC8D6E8199B4A237F89C6 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_m2321B3C7FDC7EDF2CC66755B367A99C73BBED637 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>(System.String,System.Type,System.Type)
inline bool XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_TisProvider_tFA38277C1A745937FCB6524003B71D37D3C89D01_m234C7B7148319173C58CB25B3240353D649FCFD4 (String_t* ___name0, Type_t* ___subsystemTypeOverride1, Type_t* ___providerType2, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, Type_t*, Type_t*, const RuntimeMethod*))XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m2706E5AA1DF10A4EA82992124656400817D8861D_gshared)(___name0, ___subsystemTypeOverride1, ___providerType2, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor__ctor_mC8E3D6FD2332F2A94256D545FD8E31C468E776CE (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___accessibilitySubsystemCinfo0, const RuntimeMethod* method) ;
// CinfoT Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::ConstructCinfo<Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo>()
inline AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_m34E972FD0A5631DA8856DEC9F93FCF7C242AF0D1 (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E (*) (const RuntimeMethod*))XRSubsystemHelpers_ConstructCinfo_TisRuntimeObject_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_mE573AFA052C6F6C2BF845C092BBFE9964B846161_gshared)(method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::Register(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_Register_mFC2E7A9F7FED378C2BED85C53CC43ACAC43BC17E (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___accessibilitySubsystemParams0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem__ctor_mD84A4CC166B3BCB2FDCDA9C1B6090B5CE88ECE8D (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mBD2AFC539ABE147717799807C3871A80DB5CA407 (Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* __this, const RuntimeMethod* method) ;
// ConfigT Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetConfiguration<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig,Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem>()
inline AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_m2E724CCB4550C6D5FD259FD419FFE29DC6FEBAF1 (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* (*) (const RuntimeMethod*))XRSubsystemHelpers_GetConfiguration_TisRuntimeObject_TisRuntimeObject_m5730AF6C890172F577945B3842F17892126B6039_gshared)(method);
}
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::get_Config()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* AccessibilityProvider_get_Config_mF60358086B9C84BBE7FC0BBDFC15D516E9AA5518_inline (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::get_InvertTextColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_mB3EFA58A0DA577D59C6CC4A21DA3A6D2EDCC1507_inline (AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::RaiseInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_RaiseInvertTextColorChanged_m85DA5758429EBD248085E49799EBFC15B49B7375 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, bool ___invert0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.GraphicsTools.AccessibilityUtilities::SetTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityUtilities_SetTextColorInversion_mC09F7AF4F51149FD8408955811D3FCC83C0663FB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___textMaterial0, bool ___Invert1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_get_InvertTextColor_m331FEB61822B8E1166AD5EE9FA013B8F242C83E9 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, bool ___invert0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Material TMPro.TMP_Text::get_fontMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::ApplyTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_ApplyTextColorInversion_m602877CF64869FC55D7BC76B00D184E6D2B8CB64 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, bool ___enable1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::ApplyInitialConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_ApplyInitialConfiguration_mDFFB9D1BBD1916FD286FD0A61A95532DF041DC89 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::add_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_add_InvertTextColorChanged_m0402CFF9B639204868E2A5A9CAD4487C70563399 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::remove_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_remove_InvertTextColorChanged_m0871C5C842CD449ADE5D6641DD713284D5E82097 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::GetTextMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_GetTextMaterial_m008720F2C7416B0AE7CB6F5C96FD1579E4AC8165 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetFirstRunningSubsystem<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>()
inline AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m120E651FE911BCDF70BB783C0262A1BAC9A6CEC1 (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* (*) (const RuntimeMethod*))XRSubsystemHelpers_GetFirstRunningSubsystem_TisRuntimeObject_m2A1767880A39EC8FE90272CF9D154FEDAAC7ECE6_gshared)(method);
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::RegisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_RegisterHandlers_m583C13B1D71888715039F7348D5626D9D61B2A0C (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::UnregisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_UnregisterHandlers_m5C0E3F774A5F96B114B0A79448DC830A90B7A4A0 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem__ctor_mD84A4CC166B3BCB2FDCDA9C1B6090B5CE88ECE8D (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3__ctor_m8B4D570C7E394A11065FCE479C0350718BA78B1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AccessibilitySubsystem()
		il2cpp_codegen_runtime_class_init_inline(MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC_il2cpp_TypeInfo_var);
		MRTKSubsystem_3__ctor_m8B4D570C7E394A11065FCE479C0350718BA78B1A(__this, MRTKSubsystem_3__ctor_m8B4D570C7E394A11065FCE479C0350718BA78B1A_RuntimeMethod_var);
		// { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_get_InvertTextColor_m331FEB61822B8E1166AD5EE9FA013B8F242C83E9 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.InvertTextColor;
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(22 /* System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::get_InvertTextColor() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::set_InvertTextColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_set_InvertTextColor_mE4184A323BAB7AFA8ABBE0CB4F8922D344237C62 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => provider.InvertTextColor = value;
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		bool L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(23 /* System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::set_InvertTextColor(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::add_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_add_InvertTextColorChanged_m0402CFF9B639204868E2A5A9CAD4487C70563399 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add => provider.InvertTextColorChanged += value;
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::add_InvertTextColorChanged(System.Action`1<System.Boolean>) */, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::remove_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_remove_InvertTextColorChanged_m0871C5C842CD449ADE5D6641DD713284D5E82097 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove => provider.InvertTextColorChanged -= value;
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(25 /* System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::remove_InvertTextColorChanged(System.Action`1<System.Boolean>) */, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::ApplyTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_ApplyTextColorInversion_m602877CF64869FC55D7BC76B00D184E6D2B8CB64 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, bool ___enable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool enable) => provider.ApplyTextColorInversion(material, enable);
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material0;
		bool L_2 = ___enable1;
		NullCheck(L_0);
		VirtualActionInvoker2< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, bool >::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::ApplyTextColorInversion(UnityEngine.Material,System.Boolean) */, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::Register(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_Register_mFC2E7A9F7FED378C2BED85C53CC43ACAC43BC17E (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___accessibilitySubsystemParams0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AccessibilitySubsystemDescriptor descriptor = AccessibilitySubsystemDescriptor.Create(accessibilitySubsystemParams);
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_0 = ___accessibilitySubsystemParams0;
		AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* L_1;
		L_1 = AccessibilitySubsystemDescriptor_Create_m75334681116E53549EA72B6C041AFB4FBDFA2BCF(L_0, NULL);
		// SubsystemDescriptorStore.RegisterDescriptor(descriptor);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_mBCFAF0DE737C77AC4558C27771B36354A028ED9F(L_1, NULL);
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mBD2AFC539ABE147717799807C3871A80DB5CA407 (Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemProvider_1__ctor_m449DE740CB466CBCE9CAC88E814BE4E339A549E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MRTKSubsystemProvider_1__ctor_m449DE740CB466CBCE9CAC88E814BE4E339A549E5(__this, MRTKSubsystemProvider_1__ctor_m449DE740CB466CBCE9CAC88E814BE4E339A549E5_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_mB3EFA58A0DA577D59C6CC4A21DA3A6D2EDCC1507 (AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* __this, const RuntimeMethod* method) 
{
	{
		// get => invertTextColor;
		bool L_0 = __this->___invertTextColor_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::set_InvertTextColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig_set_InvertTextColor_m148E4DDB2CC2817495EE37B7EE3DC632416AEDDD (AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => invertTextColor = value;
		bool L_0 = ___value0;
		__this->___invertTextColor_4 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig_Reset_m5CBD6550C57E2DA0EA15E4171A125289D851499B (AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* __this, const RuntimeMethod* method) 
{
	{
		// invertTextColor = default;
		__this->___invertTextColor_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig__ctor_m6A62C68C37CEE7C72E4A90E6A25EFA542ECA9D41 (AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* __this, const RuntimeMethod* method) 
{
	{
		BaseSubsystemConfig__ctor_m66121F19C6B007FBB7035AD63440E3DFF202C190(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshal_pinvoke(const AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E& unmarshaled, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshal_pinvoke_back(const AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_pinvoke& marshaled, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E& unmarshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshal_pinvoke_cleanup(AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshal_com(const AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E& unmarshaled, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_com& marshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshal_com_back(const AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_com& marshaled, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E& unmarshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshal_com_cleanup(AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_com& marshaled)
{
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_mF53C471575B6B9CDB142D579D4D1E970498393C3 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_Name_mF53C471575B6B9CDB142D579D4D1E970498393C3_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_Name_mF53C471575B6B9CDB142D579D4D1E970498393C3_inline(_thisAdjusted, ___value0, method);
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_mCA7BFEFB89A9D22D0B0516361322C21DF7744E11 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_DisplayName_mCA7BFEFB89A9D22D0B0516361322C21DF7744E11_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_DisplayName_mCA7BFEFB89A9D22D0B0516361322C21DF7744E11_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mAB1EB47A2BFA9FB5AD625A65220F6633FC6FBBBA (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_DisplayName_mAB1EB47A2BFA9FB5AD625A65220F6633FC6FBBBA_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_DisplayName_mAB1EB47A2BFA9FB5AD625A65220F6633FC6FBBBA_inline(_thisAdjusted, ___value0, method);
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Author()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_m0FC77D7F0CA355968A0C20B3621E30095050D2AE (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_Author_m0FC77D7F0CA355968A0C20B3621E30095050D2AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_Author_m0FC77D7F0CA355968A0C20B3621E30095050D2AE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Author(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m8BD58AAE1204CF5383890839A16F5F84826172EC (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAuthorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_Author_m8BD58AAE1204CF5383890839A16F5F84826172EC_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_Author_m8BD58AAE1204CF5383890839A16F5F84826172EC_inline(_thisAdjusted, ___value0, method);
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ConfigType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m1B0C4660573089FADB145C06C75C9AD371FDC6AB (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m1B0C4660573089FADB145C06C75C9AD371FDC6AB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_ConfigType_m1B0C4660573089FADB145C06C75C9AD371FDC6AB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ConfigType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_mBD52A99DFC763457583F688A894BA6CA3B4D624D (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CConfigTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_ConfigType_mBD52A99DFC763457583F688A894BA6CA3B4D624D_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_ConfigType_mBD52A99DFC763457583F688A894BA6CA3B4D624D_inline(_thisAdjusted, ___value0, method);
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ProviderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_m67F5E1C4C10FCEDB6B85FD38AB6311EF59529BAA (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CProviderTypeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderTypeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_ProviderType_m67F5E1C4C10FCEDB6B85FD38AB6311EF59529BAA_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_ProviderType_m67F5E1C4C10FCEDB6B85FD38AB6311EF59529BAA_inline(_thisAdjusted, ___value0, method);
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mC07BEB328EC7012632E2DA5144B6E65FF3C48A7D (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mC07BEB328EC7012632E2DA5144B6E65FF3C48A7D_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mC07BEB328EC7012632E2DA5144B6E65FF3C48A7D_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m573E0F70BC70EA62DF761CFDA0B6E0C763081502 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___other0, const RuntimeMethod* method) 
{
	{
		// return
		//     ReferenceEquals(Name, other.Name)
		//     && ReferenceEquals(ProviderType, other.ProviderType)
		//     && ReferenceEquals(SubsystemTypeOverride, other.SubsystemTypeOverride);
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline(__this, NULL);
		String_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline((&___other0), NULL);
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_002e;
		}
	}
	{
		Type_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline(__this, NULL);
		Type_t* L_3;
		L_3 = AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline((&___other0), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_2) == ((RuntimeObject*)(Type_t*)L_3))))
		{
			goto IL_002e;
		}
	}
	{
		Type_t* L_4;
		L_4 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline(__this, NULL);
		Type_t* L_5;
		L_5 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline((&___other0), NULL);
		return (bool)((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_5))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AccessibilitySubsystemCinfo_Equals_m573E0F70BC70EA62DF761CFDA0B6E0C763081502_AdjustorThunk (RuntimeObject* __this, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___other0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	bool _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_Equals_m573E0F70BC70EA62DF761CFDA0B6E0C763081502(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_mF4BE2D142B25D5F6E1C0057E4FB0C7F7D35BBC49 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((obj is AccessibilitySubsystemCinfo) && Equals((AccessibilitySubsystemCinfo)obj));
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = AccessibilitySubsystemCinfo_Equals_m573E0F70BC70EA62DF761CFDA0B6E0C763081502(__this, ((*(AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*)((AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*)(AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*)UnBox(L_1, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AccessibilitySubsystemCinfo_Equals_mF4BE2D142B25D5F6E1C0057E4FB0C7F7D35BBC49_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	bool _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_Equals_mF4BE2D142B25D5F6E1C0057E4FB0C7F7D35BBC49(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::op_Equality(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Equality_mC0577F5F24558A59D07D1013E33220DBC3C797DF (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___lhs0, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___rhs1, const RuntimeMethod* method) 
{
	{
		// return lhs.Equals(rhs);
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_0 = ___rhs1;
		bool L_1;
		L_1 = AccessibilitySubsystemCinfo_Equals_m573E0F70BC70EA62DF761CFDA0B6E0C763081502((&___lhs0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::op_Inequality(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Inequality_mC819AE12895C439CAD9D1E9DB1B56A679E62D58F (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___lhs0, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___rhs1, const RuntimeMethod* method) 
{
	{
		// return !(lhs == rhs);
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_0 = ___lhs0;
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_1 = ___rhs1;
		bool L_2;
		L_2 = AccessibilitySubsystemCinfo_op_Equality_mC0577F5F24558A59D07D1013E33220DBC3C797DF(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AccessibilitySubsystemCinfo_GetHashCode_m8D1F75352A7A0CB6E48B9469359BDB148F0EBC7C (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// throw new ApplicationException("Do not hash subsystem descriptors as keys.");
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_0 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0514B8E4342F7B936BE02120037C20832C1C2F20)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessibilitySubsystemCinfo_GetHashCode_m8D1F75352A7A0CB6E48B9469359BDB148F0EBC7C_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  int32_t AccessibilitySubsystemCinfo_GetHashCode_m8D1F75352A7A0CB6E48B9469359BDB148F0EBC7C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_GetHashCode_m8D1F75352A7A0CB6E48B9469359BDB148F0EBC7C(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor__ctor_mC8E3D6FD2332F2A94256D545FD8E31C468E776CE (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___accessibilitySubsystemCinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m71AF764A1B4F8B20ECD5A5F3F9D308C3B0ED6E8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AccessibilitySubsystemDescriptor(AccessibilitySubsystemCinfo accessibilitySubsystemCinfo)
		SubsystemDescriptorWithProvider_2__ctor_m71AF764A1B4F8B20ECD5A5F3F9D308C3B0ED6E8C(__this, SubsystemDescriptorWithProvider_2__ctor_m71AF764A1B4F8B20ECD5A5F3F9D308C3B0ED6E8C_RuntimeMethod_var);
		// Name = accessibilitySubsystemCinfo.Name;
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline((&___accessibilitySubsystemCinfo0), NULL);
		AccessibilitySubsystemDescriptor_set_Name_mE2323A32E62269C730B7F3C8901F9DC81A8422F1(__this, L_0, NULL);
		// DisplayName = accessibilitySubsystemCinfo.DisplayName;
		String_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_DisplayName_mCA7BFEFB89A9D22D0B0516361322C21DF7744E11_inline((&___accessibilitySubsystemCinfo0), NULL);
		AccessibilitySubsystemDescriptor_set_DisplayName_mCB70695169A969F148278794C6D35B37CAB6718F_inline(__this, L_1, NULL);
		// Author = accessibilitySubsystemCinfo.Author;
		String_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_Author_m0FC77D7F0CA355968A0C20B3621E30095050D2AE_inline((&___accessibilitySubsystemCinfo0), NULL);
		AccessibilitySubsystemDescriptor_set_Author_mE5DD5C82C19A2A8704F58AF48C9CBD7C59F77409_inline(__this, L_2, NULL);
		// ProviderType = accessibilitySubsystemCinfo.ProviderType;
		Type_t* L_3;
		L_3 = AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline((&___accessibilitySubsystemCinfo0), NULL);
		AccessibilitySubsystemDescriptor_set_ProviderType_m03E7207FF62BC755E1EAC8D6E8199B4A237F89C6(__this, L_3, NULL);
		// SubsystemTypeOverride = accessibilitySubsystemCinfo.SubsystemTypeOverride;
		Type_t* L_4;
		L_4 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline((&___accessibilitySubsystemCinfo0), NULL);
		AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_m2321B3C7FDC7EDF2CC66755B367A99C73BBED637(__this, L_4, NULL);
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_Name_m3A843CA19434570FFAFBCE1173EC2C1B4C4FD148 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get => id; set => id = value; }
		String_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Name_mE2323A32E62269C730B7F3C8901F9DC81A8422F1 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get => id; set => id = value; }
		String_t* L_0 = ___value0;
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_DisplayName_mA2AEF88ED13031610F95087BA6BDBEA6E8D93550 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_mCB70695169A969F148278794C6D35B37CAB6718F (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_Author()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_Author_mD2D3358C108F29D5D96552B3F9E0BF9E73223C6D (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Author(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_mE5DD5C82C19A2A8704F58AF48C9CBD7C59F77409 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAuthorU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_ConfigType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemDescriptor_get_ConfigType_m06CF2CD0D8DAC6FE3B20B421D3598613EA7FF577 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_ConfigType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ConfigType_mDC313F6F8247486217636FC6A9FE912DE7D6168D (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CConfigTypeU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_ProviderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemDescriptor_get_ProviderType_m5D1BD1B1875041CC09D1D69E57FADD1206073CB3 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get => providerType; set => providerType = value; }
		Type_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ProviderType_m03E7207FF62BC755E1EAC8D6E8199B4A237F89C6 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get => providerType; set => providerType = value; }
		Type_t* L_0 = ___value0;
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_0, NULL);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_SubsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemDescriptor_get_SubsystemTypeOverride_m6008AAF8D768BB57AAF0B158B344EE4EB0F82FEC (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get => subsystemTypeOverride; set => subsystemTypeOverride = value; }
		Type_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_m2321B3C7FDC7EDF2CC66755B367A99C73BBED637 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get => subsystemTypeOverride; set => subsystemTypeOverride = value; }
		Type_t* L_0 = ___value0;
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_0, NULL);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* AccessibilitySubsystemDescriptor_Create_m75334681116E53549EA72B6C041AFB4FBDFA2BCF (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_TisProvider_tFA38277C1A745937FCB6524003B71D37D3C89D01_m234C7B7148319173C58CB25B3240353D649FCFD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral680D5F85FF107897716444439FE6176166BED070);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!XRSubsystemHelpers.CheckTypes<AccessibilitySubsystem, AccessibilitySubsystem.Provider>(cinfo.Name,
		//                                                                                   cinfo.SubsystemTypeOverride,
		//                                                                                   cinfo.ProviderType))
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline((&___cinfo0), NULL);
		Type_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline((&___cinfo0), NULL);
		Type_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline((&___cinfo0), NULL);
		bool L_3;
		L_3 = XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_TisProvider_tFA38277C1A745937FCB6524003B71D37D3C89D01_m234C7B7148319173C58CB25B3240353D649FCFD4(L_0, L_1, L_2, XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_TisProvider_tFA38277C1A745937FCB6524003B71D37D3C89D01_m234C7B7148319173C58CB25B3240353D649FCFD4_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentException("Could not create AccessibilitySubsystemDescriptor.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B158F9A3667630BBA0D7A4DB24E6105065433E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessibilitySubsystemDescriptor_Create_m75334681116E53549EA72B6C041AFB4FBDFA2BCF_RuntimeMethod_var)));
	}

IL_0027:
	{
		// Debug.Log("Successfully created new descriptor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral680D5F85FF107897716444439FE6176166BED070, NULL);
		// return new AccessibilitySubsystemDescriptor(cinfo);
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_5 = ___cinfo0;
		AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* L_6 = (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A*)il2cpp_codegen_object_new(AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AccessibilitySubsystemDescriptor__ctor_mC8E3D6FD2332F2A94256D545FD8E31C468E776CE(L_6, L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKAccessibilitySubsystem_Register_mEAB3BAE7A7214B8CA7B9BE42FCC772E62DF5AC5D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_m34E972FD0A5631DA8856DEC9F93FCF7C242AF0D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cinfo = XRSubsystemHelpers.ConstructCinfo<MRTKAccessibilitySubsystem, AccessibilitySubsystemCinfo>();
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_0;
		L_0 = XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_m34E972FD0A5631DA8856DEC9F93FCF7C242AF0D1(XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_m34E972FD0A5631DA8856DEC9F93FCF7C242AF0D1_RuntimeMethod_var);
		V_0 = L_0;
		// if (!AccessibilitySubsystem.Register(cinfo))
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_1 = V_0;
		bool L_2;
		L_2 = AccessibilitySubsystem_Register_mFC2E7A9F7FED378C2BED85C53CC43ACAC43BC17E(L_1, NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogError($"Failed to register the {cinfo.Name} subsystem.");
		String_t* L_3;
		L_3 = AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7, L_3, _stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_4, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKAccessibilitySubsystem__ctor_m7FE92CBC63446A30E08E8C5782BB063AE37EB5C2 (MRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD* __this, const RuntimeMethod* method) 
{
	{
		AccessibilitySubsystem__ctor_mD84A4CC166B3BCB2FDCDA9C1B6090B5CE88ECE8D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* AccessibilityProvider_get_Config_mF60358086B9C84BBE7FC0BBDFC15D516E9AA5518 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, const RuntimeMethod* method) 
{
	{
		// protected AccessibilitySubsystemConfig Config { get; }
		AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* L_0 = __this->___U3CConfigU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider__ctor_mE9D826044C3E8D5AD5DD2309FB99CA6148026AAF (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_m2E724CCB4550C6D5FD259FD419FFE29DC6FEBAF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AccessibilityProvider() : base()
		Provider__ctor_mBD2AFC539ABE147717799807C3871A80DB5CA407(__this, NULL);
		// Config = XRSubsystemHelpers.GetConfiguration<AccessibilitySubsystemConfig, MRTKAccessibilitySubsystem>();
		AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* L_0;
		L_0 = XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_m2E724CCB4550C6D5FD259FD419FFE29DC6FEBAF1(XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_m2E724CCB4550C6D5FD259FD419FFE29DC6FEBAF1_RuntimeMethod_var);
		__this->___U3CConfigU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigU3Ek__BackingField_1), (void*)L_0);
		// invertTextColor = Config.InvertTextColor;
		AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* L_1;
		L_1 = AccessibilityProvider_get_Config_mF60358086B9C84BBE7FC0BBDFC15D516E9AA5518_inline(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = AccessibilitySubsystemConfig_get_InvertTextColor_mB3EFA58A0DA577D59C6CC4A21DA3A6D2EDCC1507_inline(L_1, NULL);
		__this->___invertTextColor_2 = L_2;
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_get_InvertTextColor_m2C6A30123CB4599C810D7C8A673065E76C5A1F3E (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, const RuntimeMethod* method) 
{
	{
		// get => invertTextColor;
		bool L_0 = __this->___invertTextColor_2;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::set_InvertTextColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_set_InvertTextColor_mCB40781EAB64B320A42941E9BA9B6A1F543925C4 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (invertTextColor != value)
		bool L_0 = __this->___invertTextColor_2;
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		// invertTextColor = value;
		bool L_2 = ___value0;
		__this->___invertTextColor_2 = L_2;
		// RaiseInvertTextColorChanged(invertTextColor);
		bool L_3 = __this->___invertTextColor_2;
		AccessibilityProvider_RaiseInvertTextColorChanged_m85DA5758429EBD248085E49799EBFC15B49B7375(__this, L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::add_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_add_InvertTextColorChanged_m48C74E94D158BCFF0DDF4F484DF5FBA0E9ED2276 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___InvertTextColorChanged_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___InvertTextColorChanged_3);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::remove_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_remove_InvertTextColorChanged_m2E65C23AD9CA5744FAFEE5534FCF3A5D011FE3FE (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___InvertTextColorChanged_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___InvertTextColorChanged_3);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::ApplyTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_ApplyTextColorInversion_m34C534A4F8A3EA68D4C236BAF4E263FFFD2100D1 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, bool ___enable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilityUtilities_tFAA889699821BD03A832D5E3343203DEC9016D1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AccessibilityUtilities.SetTextColorInversion(material, enable);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		bool L_1 = ___enable1;
		il2cpp_codegen_runtime_class_init_inline(AccessibilityUtilities_tFAA889699821BD03A832D5E3343203DEC9016D1A_il2cpp_TypeInfo_var);
		AccessibilityUtilities_SetTextColorInversion_mC09F7AF4F51149FD8408955811D3FCC83C0663FB(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::RaiseInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_RaiseInvertTextColorChanged_m85DA5758429EBD248085E49799EBFC15B49B7375 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, bool ___invert0, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		// InvertTextColorChanged?.Invoke(invert);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___InvertTextColorChanged_3;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		bool L_2 = ___invert0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Contents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescribableObject_get_Contents_mC6D3BFC19EC76108AFA522F5607210C6B1E87564 (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public string Contents => contents;
		String_t* L_0 = __this->___contents_4;
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_ContentSummary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescribableObject_get_ContentSummary_mD890F44B56FFA0F1B35AC3CC5B40AD95F81201DA (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public string ContentSummary => contentSummary;
		String_t* L_0 = __this->___contentSummary_5;
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescribableObject_get_Description_m1DF2317703B0619D21802292AB637D268768C71B (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public string Description => description;
		String_t* L_0 = __this->___description_6;
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Accessibility.DescribableFlag Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Flags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DescribableObject_get_Flags_mAF79774B5ACFB6FAEFF4B6AA9B642E697EE10C59 (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// get => flags;
		int32_t L_0 = __this->___flags_7;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::set_Flags(Microsoft.MixedReality.Toolkit.Accessibility.DescribableFlag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescribableObject_set_Flags_m273F0217FA8894AC7AC68F81C31DEF569886F890 (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => flags = value;
		int32_t L_0 = ___value0;
		__this->___flags_7 = L_0;
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Instructions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescribableObject_get_Instructions_m505DF9BBC0795EEABD3E29FA94EEF0AC769C9DFC (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public string Instructions => instructions;
		String_t* L_0 = __this->___instructions_8;
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Accessibility.ComponentRole Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Role()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DescribableObject_get_Role_mB788CD6EC15B9709F70E977EDCD0BD868F93D71A (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public ComponentRole Role => role;
		int32_t L_0 = __this->___role_9;
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Semantic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescribableObject_get_Semantic_mABAB556D1623592CF564165A50CCA2623ECEB574 (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public string Semantic => semantic;
		String_t* L_0 = __this->___semantic_10;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescribableObject__ctor_m55A1F3574301BC8B9A1770D0B80BE6767DCB27F3 (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string contents = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___contents_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contents_4), (void*)L_0);
		// private string contentSummary = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___contentSummary_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contentSummary_5), (void*)L_1);
		// private string description = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___description_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description_6), (void*)L_2);
		// private DescribableFlag flags = DescribableFlag.Static | DescribableFlag.Item;
		__this->___flags_7 = ((int32_t)20);
		// private string instructions = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___instructions_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instructions_8), (void*)L_3);
		// private string semantic = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___semantic_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___semantic_10), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::ApplyInitialConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_ApplyInitialConfiguration_mDFFB9D1BBD1916FD286FD0A61A95532DF041DC89 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	{
		// OnInvertTextColorChanged(accessibilitySubsystem.InvertTextColor);
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_0 = __this->___accessibilitySubsystem_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = AccessibilitySubsystem_get_InvertTextColor_m331FEB61822B8E1166AD5EE9FA013B8F242C83E9(L_0, NULL);
		TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::GetTextMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_GetTextMaterial_m008720F2C7416B0AE7CB6F5C96FD1579E4AC8165 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8);
		s_Il2CppMethodInitialized = true;
	}
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* V_0 = NULL;
	{
		// TMP_Text tmpText = GetComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		V_0 = L_0;
		// if (tmpText != null)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// material = tmpText.fontMaterial;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = V_0;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6(L_3, NULL);
		__this->___material_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_5), (void*)L_4);
		// return;
		return;
	}

IL_001d:
	{
		// Debug.LogError($"{nameof(TextAccessibility)} requires being attached to a TextMeshPro or TextMeshProUGUI object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, bool ___invert0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* G_B4_0 = NULL;
	AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* G_B3_0 = NULL;
	{
		// if (material == null) { return; }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (material == null) { return; }
		return;
	}

IL_000f:
	{
		// accessibilitySubsystem?.ApplyTextColorInversion(material, invert);
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_2 = __this->___accessibilitySubsystem_4;
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___material_5;
		bool L_5 = ___invert0;
		NullCheck(G_B4_0);
		AccessibilitySubsystem_ApplyTextColorInversion_m602877CF64869FC55D7BC76B00D184E6D2B8CB64(G_B4_0, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::RegisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_RegisterHandlers_m583C13B1D71888715039F7348D5626D9D61B2A0C (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (accessibilitySubsystem != null)
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_0 = __this->___accessibilitySubsystem_4;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// ApplyInitialConfiguration();
		TextAccessibility_ApplyInitialConfiguration_mDFFB9D1BBD1916FD286FD0A61A95532DF041DC89(__this, NULL);
		// accessibilitySubsystem.InvertTextColorChanged += OnInvertTextColorChanged;
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_1 = __this->___accessibilitySubsystem_4;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AccessibilitySubsystem_add_InvertTextColorChanged_m0402CFF9B639204868E2A5A9CAD4487C70563399(L_1, L_2, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::UnregisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_UnregisterHandlers_m5C0E3F774A5F96B114B0A79448DC830A90B7A4A0 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (accessibilitySubsystem != null)
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_0 = __this->___accessibilitySubsystem_4;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// accessibilitySubsystem.InvertTextColorChanged -= OnInvertTextColorChanged;
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_1 = __this->___accessibilitySubsystem_4;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AccessibilitySubsystem_remove_InvertTextColorChanged_m0871C5C842CD449ADE5D6641DD713284D5E82097(L_1, L_2, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_Start_m47C604FE680369A19FECE57A9C1214B65F6D66FB (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m120E651FE911BCDF70BB783C0262A1BAC9A6CEC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetTextMaterial();
		TextAccessibility_GetTextMaterial_m008720F2C7416B0AE7CB6F5C96FD1579E4AC8165(__this, NULL);
		// accessibilitySubsystem = XRSubsystemHelpers.GetFirstRunningSubsystem<AccessibilitySubsystem>();
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_0;
		L_0 = XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m120E651FE911BCDF70BB783C0262A1BAC9A6CEC1(XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m120E651FE911BCDF70BB783C0262A1BAC9A6CEC1_RuntimeMethod_var);
		__this->___accessibilitySubsystem_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessibilitySubsystem_4), (void*)L_0);
		// RegisterHandlers();
		TextAccessibility_RegisterHandlers_m583C13B1D71888715039F7348D5626D9D61B2A0C(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnEnable_m77CC3A704A7EC2A5B99CC465E5C27CBE7FA4E032 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	{
		// RegisterHandlers();
		TextAccessibility_RegisterHandlers_m583C13B1D71888715039F7348D5626D9D61B2A0C(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnDisable_m0E8B2D392F076B4C279C863A8812509CEDB25E5B (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	{
		// UnregisterHandlers();
		TextAccessibility_UnregisterHandlers_m5C0E3F774A5F96B114B0A79448DC830A90B7A4A0(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnDestroy_m3B388F85FF2FAD7399A387928FBB4B2E6FD367B6 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	{
		// accessibilitySubsystem = null;
		__this->___accessibilitySubsystem_4 = (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessibilitySubsystem_4), (void*)(AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212*)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility__ctor_m42483129E5E89D797435EA34EB75D3E454BA9006 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_mF53C471575B6B9CDB142D579D4D1E970498393C3_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_mCA7BFEFB89A9D22D0B0516361322C21DF7744E11_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mAB1EB47A2BFA9FB5AD625A65220F6633FC6FBBBA_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_m0FC77D7F0CA355968A0C20B3621E30095050D2AE_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m8BD58AAE1204CF5383890839A16F5F84826172EC_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAuthorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m1B0C4660573089FADB145C06C75C9AD371FDC6AB_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_mBD52A99DFC763457583F688A894BA6CA3B4D624D_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CConfigTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_m67F5E1C4C10FCEDB6B85FD38AB6311EF59529BAA_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CProviderTypeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderTypeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mC07BEB328EC7012632E2DA5144B6E65FF3C48A7D_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_mCB70695169A969F148278794C6D35B37CAB6718F_inline (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_mE5DD5C82C19A2A8704F58AF48C9CBD7C59F77409_inline (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAuthorU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* AccessibilityProvider_get_Config_mF60358086B9C84BBE7FC0BBDFC15D516E9AA5518_inline (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, const RuntimeMethod* method) 
{
	{
		// protected AccessibilitySubsystemConfig Config { get; }
		AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* L_0 = __this->___U3CConfigU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_mB3EFA58A0DA577D59C6CC4A21DA3A6D2EDCC1507_inline (AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* __this, const RuntimeMethod* method) 
{
	{
		// get => invertTextColor;
		bool L_0 = __this->___invertTextColor_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CproviderU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
