//---------------------------------------------------------------------------

#include <basepch.h>
#pragma hdrstop
#pragma package(smart_init)
USERES("JVCL200_D60C.res");
USEPACKAGE("vcl.bpi");
USEUNIT("..\source\JVCLReg.pas");
USEUNIT("..\Source\JvAlarmsEditor.pas");
USEUNIT("..\Source\JvBaseDlgEditor.pas");
USEUNIT("..\Source\JvCommonDialogDEditor.pas");
USEUNIT("..\Source\JvDataEmbeddedEditor.pas");
USEUNIT("..\Source\JvExchListboxes.pas");
USEFORMNS("..\Source\JvFormLists.pas", Jvformlists, FormListb);
USEFORMNS("..\Source\JvFormLog.pas", Jvformlog, foLog);
USEUNIT("..\Source\JvHtmlParserEditor.pas");
USEUNIT("..\Source\JvLogFile.pas");
USEUNIT("..\Source\JvLoginDlg.pas");
USEUNIT("..\Source\JvPatcherEditor.pas");
USEUNIT("..\Source\JVCLMiscal.pas");
USEUNIT("..\Source\JvOutlookEdit.pas");
USEFORMNS("..\Source\JvDateTimeDlg.pas", Jvdatetimedlg, frmSelectDateTimeDlg);
USEUNIT("..\Source\JvDsgnEditors.pas");
USEUNIT("..\Source\JvTimeLineEdit.pas");
USEUNIT("..\Source\JvOutEdit.pas");
USEFORMNS("..\Source\JvStrLEdit.pas", Jvstrledit, JvStrEditDlg);
USEFORMNS("..\Source\JvOLBEditor.pas", JvOLBEditor, frmOLBEditor);
USEUNIT("..\Source\JvChNtfyProperty.pas");
USEUNIT("..\Source\JvLCProperty.pas");
USEUNIT("..\source\JvAppletProperty.pas");
USEUNIT("..\source\JvLConst.pas");
USEUNIT("..\source\JvColors.pas");
USEUNIT("..\source\JvDsgn.pas");
USEUNIT("..\source\JvCtlReg.pas");
USEUNIT("..\source\JvDBReg.pas");
USEUNIT("..\source\JvBDEReg.pas");
USEFORMNS("..\source\JvImagPrvw.pas", Jvimagprvw, ImageForm);
USEFORMNS("..\source\JvCheckItm.pas", Jvcheckitm, JvCheckItemsEditor);
USEFORMNS("..\source\JvDirFrm.pas", Jvdirfrm, JvDirectoryListDialog);
USEUNIT("..\source\JvFormWallpaperEditor.pas");
USEFORMNS("..\source\JvIColEdit.pas", Jvicoledit, IconListDialog);
USEFORMNS("..\source\JvGradedit.pas", Jvgradedit, GradCaptionsEditor);
USEFORMNS("..\source\JvJVCLAbout.pas", Jvjvclabout, JvJVCLAboutForm);
USEFORMNS("..\source\JvMinMaxEd.pas", Jvminmaxed, MinMaxInfoEditDialog);
USEFORMNS("..\source\JvPgMngrEd.pas", Jvpgmngred, JvProxyEditor);
USEFORMNS("..\source\JvPictEdit.pas", Jvpictedit, PictureEditDialog);
USEFORMNS("..\source\JvPresrDsn.pas", Jvpresrdsn, JvFormPropsDlg);
USEFORMNS("..\source\JvQBndDlg.pas", Jvqbnddlg, JvQueryParamsDialog);
USEFORMNS("..\source\JvSbEdit.pas", Jvsbedit, JvSpeedbarEditor);
USEFORMNS("..\source\JvSelDSFrm.pas", Jvseldsfrm, JvSelectDataSetForm);
USEFORMNS("..\source\JvTimLstEd.pas", Jvtimlsted, JvTimerItemsEditor);
USEPACKAGE("vcldb.bpi");
USEPACKAGE("JVCL200_R60C.bpi");
USEPACKAGE("dclstd.bpi");
USEPACKAGE("vclx.bpi");
USEPACKAGE("vclbde.bpi");
USEPACKAGE("vcljpg.bpi");
USEUNIT("..\source\JvActions.pas");
USEFORMNS("..\source\JvActnRes.pas", Jvactnres, JvStandardActions); /* TDataModule: File Type */
USEFORMNS("..\source\JvBandObjectDLLWizardForm.pas", Jvbandobjectdllwizardform, zWizardForm);
USEUNIT("..\source\JvBandObjectDLLWizard.pas");
USEFORMNS("..\source\JvhtHintEditor.pas", Jvhthinteditor, JvHintEditor);
USEUNIT("..\source\JvIDEZoom.pas");
USEUNIT("..\source\JvIReg.pas");
USEFORMNS("..\source\JvPluginParams.pas", Jvpluginparams, frmPluginParams);
USEUNIT("..\source\JvPluginWizard.pas");
USEFORMNS("..\source\JvRegAutoEditor.pas", Jvregautoeditor, JvRegEditor);
USEUNIT("..\source\JvSchedEvntReg.pas");
USEUNIT("..\source\JvTipOfDayProp.pas");
USEFORMNS("..\source\ScheduleEditor.pas", Scheduleeditor, frmScheduleEditor);
USEUNIT("..\source\JvToolReg.pas");
USEPACKAGE("designide.bpi");

//---------------------------------------------------------------------------

//   Package source.
//---------------------------------------------------------------------------

#pragma argsused
int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void*)
{
        return 1;
}
//---------------------------------------------------------------------------
 