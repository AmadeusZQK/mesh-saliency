/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#ifndef __PATCHWIZ_H__
#define __PATCHWIZ_H__

#include <winapifamily.h>
#include <_mingw_unicode.h>

#if WINAPI_FAMILY_PARTITION (WINAPI_PARTITION_DESKTOP)
#include <windows.h>
#include <ole2.h>
#include <strsafe.h>
#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>

#ifdef _cplusplus
extern "C" {
#endif

  UINT WINAPI UiCreatePatchPackageA (LPCSTR szPcpPath, LPCSTR szPatchPath, LPCSTR szLogPath, HWND hwndStatus, LPCSTR szTempFolder, WINBOOL fRemoveTempFolderIfPresent);
  UINT WINAPI UiCreatePatchPackageW (LPCWSTR szPcpPath, LPCWSTR szPatchPath, LPCWSTR szLogPath, HWND hwndStatus, LPCWSTR szTempFolder, WINBOOL fRemoveTempFolderIfPresent);
  UINT WINAPI UiCreatePatchPackageExA (LPCSTR szPcpPath, LPCSTR szPatchPath, LPCSTR szLogPath, HWND hwndStatus, LPCSTR szTempFolder, WINBOOL fRemoveTempFolderIfPresent, DWORD dwFlags, DWORD dwReserved);
  UINT WINAPI UiCreatePatchPackageExW (LPCWSTR szPcpPath, LPCWSTR szPatchPath, LPCWSTR szLogPath, HWND hwndStatus, LPCWSTR szTempFolder, WINBOOL fRemoveTempFolderIfPresent, DWORD dwFlags, DWORD dwReserved);

#ifdef _cplusplus
}
#endif

const int cchMaxInteger = 12;
const UINT LOGNONE = 0x00000000;
const UINT LOGINFO = 0x00000001;
const UINT LOGWARN = 0x00000002;
const UINT LOGERR = 0x00000004;
const UINT LOGPERFMESSAGES = 0x00000008;
const UINT LOGALL = LOGINFO | LOGWARN | LOGERR | LOGPERFMESSAGES;
const UINT UINONE = 0x00000000;
const UINT UILOGBITS = 15;
const UINT UIALL = 1 << UILOGBITS;
const UINT DEFAULT_MINIMUM_REQUIRED_MSI_VERSION = 100;
const UINT DEFAULT_FILE_SEQUENCE_START = 2;
const UINT DEFAULT_DISK_ID = 2;

#define ERROR_PCW_BASE 0xc00e5101

#define ERROR_PCW_PCP_DOESNT_EXIST (ERROR_PCW_BASE + 0x00)
#define ERROR_PCW_PCP_BAD_FORMAT (ERROR_PCW_BASE + 0x01)
#define ERROR_PCW_CANT_CREATE_TEMP_FOLDER (ERROR_PCW_BASE + 0x02)
#define ERROR_PCW_MISSING_PATCH_PATH (ERROR_PCW_BASE + 0x03)
#define ERROR_PCW_CANT_OVERWRITE_PATCH (ERROR_PCW_BASE + 0x04)
#define ERROR_PCW_CANT_CREATE_PATCH_FILE (ERROR_PCW_BASE + 0x05)
#define ERROR_PCW_MISSING_PATCH_GUID (ERROR_PCW_BASE + 0x06)
#define ERROR_PCW_BAD_PATCH_GUID (ERROR_PCW_BASE + 0x07)
#define ERROR_PCW_BAD_GUIDS_TO_REPLACE (ERROR_PCW_BASE + 0x08)
#define ERROR_PCW_BAD_TARGET_PRODUCT_CODE_LIST (ERROR_PCW_BASE + 0x09)
#define ERROR_PCW_NO_UPGRADED_IMAGES_TO_PATCH (ERROR_PCW_BASE + 0x0a)
#define ERROR_PCW_BAD_API_PATCHING_SYMBOL_FLAGS (ERROR_PCW_BASE + 0x0c)
#define ERROR_PCW_OODS_COPYING_MSI (ERROR_PCW_BASE + 0x0d)
#define ERROR_PCW_UPGRADED_IMAGE_NAME_TOO_LONG (ERROR_PCW_BASE + 0x0e)
#define ERROR_PCW_BAD_UPGRADED_IMAGE_NAME (ERROR_PCW_BASE + 0x0f)
#define ERROR_PCW_DUP_UPGRADED_IMAGE_NAME (ERROR_PCW_BASE + 0x10)
#define ERROR_PCW_UPGRADED_IMAGE_PATH_TOO_LONG (ERROR_PCW_BASE + 0x11)
#define ERROR_PCW_UPGRADED_IMAGE_PATH_EMPTY (ERROR_PCW_BASE + 0x12)
#define ERROR_PCW_UPGRADED_IMAGE_PATH_NOT_EXIST (ERROR_PCW_BASE + 0x13)
#define ERROR_PCW_UPGRADED_IMAGE_PATH_NOT_MSI (ERROR_PCW_BASE + 0x14)
#define ERROR_PCW_UPGRADED_IMAGE_COMPRESSED (ERROR_PCW_BASE + 0x15)
#define ERROR_PCW_TARGET_IMAGE_NAME_TOO_LONG (ERROR_PCW_BASE + 0x16)
#define ERROR_PCW_BAD_TARGET_IMAGE_NAME (ERROR_PCW_BASE + 0x17)
#define ERROR_PCW_DUP_TARGET_IMAGE_NAME (ERROR_PCW_BASE + 0x18)
#define ERROR_PCW_TARGET_IMAGE_PATH_TOO_LONG (ERROR_PCW_BASE + 0x19)
#define ERROR_PCW_TARGET_IMAGE_PATH_EMPTY (ERROR_PCW_BASE + 0x1a)
#define ERROR_PCW_TARGET_IMAGE_PATH_NOT_EXIST (ERROR_PCW_BASE + 0x1b)
#define ERROR_PCW_TARGET_IMAGE_PATH_NOT_MSI (ERROR_PCW_BASE + 0x1c)
#define ERROR_PCW_TARGET_IMAGE_COMPRESSED (ERROR_PCW_BASE + 0x1d)
#define ERROR_PCW_TARGET_BAD_PROD_VALIDATE (ERROR_PCW_BASE + 0x1e)
#define ERROR_PCW_TARGET_BAD_PROD_CODE_VAL (ERROR_PCW_BASE + 0x1f)
#define ERROR_PCW_UPGRADED_MISSING_SRC_FILES (ERROR_PCW_BASE + 0x20)
#define ERROR_PCW_TARGET_MISSING_SRC_FILES (ERROR_PCW_BASE + 0x21)
#define ERROR_PCW_IMAGE_FAMILY_NAME_TOO_LONG (ERROR_PCW_BASE + 0x22)
#define ERROR_PCW_BAD_IMAGE_FAMILY_NAME (ERROR_PCW_BASE + 0x23)
#define ERROR_PCW_DUP_IMAGE_FAMILY_NAME (ERROR_PCW_BASE + 0x24)
#define ERROR_PCW_BAD_IMAGE_FAMILY_SRC_PROP (ERROR_PCW_BASE + 0x25)
#define ERROR_PCW_UFILEDATA_LONG_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x26)
#define ERROR_PCW_UFILEDATA_BLANK_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x27)
#define ERROR_PCW_UFILEDATA_MISSING_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x28)
#define ERROR_PCW_EXTFILE_LONG_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x29)
#define ERROR_PCW_EXTFILE_BLANK_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x2a)
#define ERROR_PCW_EXTFILE_BAD_FAMILY_FIELD (ERROR_PCW_BASE + 0x2b)
#define ERROR_PCW_EXTFILE_LONG_PATH_TO_FILE (ERROR_PCW_BASE + 0x2c)
#define ERROR_PCW_EXTFILE_BLANK_PATH_TO_FILE (ERROR_PCW_BASE + 0x2d)
#define ERROR_PCW_EXTFILE_MISSING_FILE (ERROR_PCW_BASE + 0x2e)
#define ERROR_PCW_BAD_FILE_SEQUENCE_START (ERROR_PCW_BASE + 0x39)
#define ERROR_PCW_CANT_COPY_FILE_TO_TEMP_FOLDER (ERROR_PCW_BASE + 0x3a)
#define ERROR_PCW_CANT_CREATE_ONE_PATCH_FILE (ERROR_PCW_BASE + 0x3b)
#define ERROR_PCW_BAD_IMAGE_FAMILY_DISKID (ERROR_PCW_BASE + 0x3c)
#define ERROR_PCW_BAD_IMAGE_FAMILY_FILESEQSTART (ERROR_PCW_BASE + 0x3d)
#define ERROR_PCW_BAD_UPGRADED_IMAGE_FAMILY (ERROR_PCW_BASE + 0x3e)
#define ERROR_PCW_BAD_TARGET_IMAGE_UPGRADED (ERROR_PCW_BASE + 0x3f)
#define ERROR_PCW_DUP_TARGET_IMAGE_PACKCODE (ERROR_PCW_BASE + 0x40)
#define ERROR_PCW_UFILEDATA_BAD_UPGRADED_FIELD (ERROR_PCW_BASE + 0x41)
#define ERROR_PCW_MISMATCHED_PRODUCT_CODES (ERROR_PCW_BASE + 0x42)
#define ERROR_PCW_MISMATCHED_PRODUCT_VERSIONS (ERROR_PCW_BASE + 0x43)
#define ERROR_PCW_CANNOT_WRITE_DDF (ERROR_PCW_BASE + 0x44)
#define ERROR_PCW_CANNOT_RUN_MAKECAB (ERROR_PCW_BASE + 0x45)
#define ERROR_PCW_WRITE_SUMMARY_PROPERTIES (ERROR_PCW_BASE + 0x4a)
#define ERROR_PCW_TFILEDATA_LONG_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x4b)
#define ERROR_PCW_TFILEDATA_BLANK_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x4c)
#define ERROR_PCW_TFILEDATA_MISSING_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x4d)
#define ERROR_PCW_TFILEDATA_BAD_TARGET_FIELD (ERROR_PCW_BASE + 0x4e)
#define ERROR_PCW_UPGRADED_IMAGE_PATCH_PATH_TOO_LONG (ERROR_PCW_BASE + 0x4f)
#define ERROR_PCW_UPGRADED_IMAGE_PATCH_PATH_NOT_EXIST (ERROR_PCW_BASE + 0x50)
#define ERROR_PCW_UPGRADED_IMAGE_PATCH_PATH_NOT_MSI (ERROR_PCW_BASE + 0x51)
#define ERROR_PCW_DUP_UPGRADED_IMAGE_PACKCODE (ERROR_PCW_BASE + 0x52)
#define ERROR_PCW_UFILEIGNORE_BAD_UPGRADED_FIELD (ERROR_PCW_BASE + 0x53)
#define ERROR_PCW_UFILEIGNORE_LONG_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x54)
#define ERROR_PCW_UFILEIGNORE_BLANK_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x55)
#define ERROR_PCW_UFILEIGNORE_BAD_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x56)
#define ERROR_PCW_FAMILY_RANGE_NAME_TOO_LONG (ERROR_PCW_BASE + 0x57)
#define ERROR_PCW_BAD_FAMILY_RANGE_NAME (ERROR_PCW_BASE + 0x58)
#define ERROR_PCW_FAMILY_RANGE_LONG_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x59)
#define ERROR_PCW_FAMILY_RANGE_BLANK_FILE_TABLE_KEY (ERROR_PCW_BASE + 0x5a)
#define ERROR_PCW_FAMILY_RANGE_LONG_RETAIN_OFFSETS (ERROR_PCW_BASE + 0x5b)
#define ERROR_PCW_FAMILY_RANGE_BLANK_RETAIN_OFFSETS (ERROR_PCW_BASE + 0x5c)
#define ERROR_PCW_FAMILY_RANGE_BAD_RETAIN_OFFSETS (ERROR_PCW_BASE + 0x5d)
#define ERROR_PCW_FAMILY_RANGE_LONG_RETAIN_LENGTHS (ERROR_PCW_BASE + 0x5e)
#define ERROR_PCW_FAMILY_RANGE_BLANK_RETAIN_LENGTHS (ERROR_PCW_BASE + 0x5f)
#define ERROR_PCW_FAMILY_RANGE_BAD_RETAIN_LENGTHS (ERROR_PCW_BASE + 0x60)
#define ERROR_PCW_FAMILY_RANGE_COUNT_MISMATCH (ERROR_PCW_BASE + 0x61)
#define ERROR_PCW_EXTFILE_LONG_IGNORE_OFFSETS (ERROR_PCW_BASE + 0x62)
#define ERROR_PCW_EXTFILE_BAD_IGNORE_OFFSETS (ERROR_PCW_BASE + 0x63)
#define ERROR_PCW_EXTFILE_LONG_IGNORE_LENGTHS (ERROR_PCW_BASE + 0x64)
#define ERROR_PCW_EXTFILE_BAD_IGNORE_LENGTHS (ERROR_PCW_BASE + 0x65)
#define ERROR_PCW_EXTFILE_IGNORE_COUNT_MISMATCH (ERROR_PCW_BASE + 0x66)
#define ERROR_PCW_EXTFILE_LONG_RETAIN_OFFSETS (ERROR_PCW_BASE + 0x67)
#define ERROR_PCW_EXTFILE_BAD_RETAIN_OFFSETS (ERROR_PCW_BASE + 0x68)
#define ERROR_PCW_TFILEDATA_LONG_IGNORE_OFFSETS (ERROR_PCW_BASE + 0x6a)
#define ERROR_PCW_TFILEDATA_BAD_IGNORE_OFFSETS (ERROR_PCW_BASE + 0x6b)
#define ERROR_PCW_TFILEDATA_LONG_IGNORE_LENGTHS (ERROR_PCW_BASE + 0x6c)
#define ERROR_PCW_TFILEDATA_BAD_IGNORE_LENGTHS (ERROR_PCW_BASE + 0x6d)
#define ERROR_PCW_TFILEDATA_IGNORE_COUNT_MISMATCH (ERROR_PCW_BASE + 0x6e)
#define ERROR_PCW_TFILEDATA_LONG_RETAIN_OFFSETS (ERROR_PCW_BASE + 0x6f)
#define ERROR_PCW_TFILEDATA_BAD_RETAIN_OFFSETS (ERROR_PCW_BASE + 0x70)
#define ERROR_PCW_CANT_GENERATE_TRANSFORM (ERROR_PCW_BASE + 0x72)
#define ERROR_PCW_CANT_CREATE_SUMMARY_INFO (ERROR_PCW_BASE + 0x73)
#define ERROR_PCW_CANT_GENERATE_TRANSFORM_POUND (ERROR_PCW_BASE + 0x74)
#define ERROR_PCW_CANT_CREATE_SUMMARY_INFO_POUND (ERROR_PCW_BASE + 0x75)
#define ERROR_PCW_BAD_UPGRADED_IMAGE_PRODUCT_CODE (ERROR_PCW_BASE + 0x76)
#define ERROR_PCW_BAD_UPGRADED_IMAGE_PRODUCT_VERSION (ERROR_PCW_BASE + 0x77)
#define ERROR_PCW_BAD_UPGRADED_IMAGE_UPGRADE_CODE (ERROR_PCW_BASE + 0x78)
#define ERROR_PCW_BAD_TARGET_IMAGE_PRODUCT_CODE (ERROR_PCW_BASE + 0x79)
#define ERROR_PCW_BAD_TARGET_IMAGE_PRODUCT_VERSION (ERROR_PCW_BASE + 0x7a)
#define ERROR_PCW_BAD_TARGET_IMAGE_UPGRADE_CODE (ERROR_PCW_BASE + 0x7b)
#define ERROR_PCW_MATCHED_PRODUCT_VERSIONS (ERROR_PCW_BASE + 0x7c)
#define ERROR_PCW_OBSOLETION_WITH_SEQUENCE_DATA (ERROR_PCW_BASE + 0x7d)
#define ERROR_PCW_OBSOLETION_WITH_MSI30 (ERROR_PCW_BASE + 0x7e)
#define ERROR_PCW_OBSOLETION_WITH_PATCHSEQUENCE (ERROR_PCW_BASE + 0x7f)
#define ERROR_PCW_CANNOT_CREATE_TABLE (ERROR_PCW_BASE + 0x80)
#define ERROR_PCW_CANT_GENERATE_SEQUENCEINFO_MAJORUPGD (ERROR_PCW_BASE + 0x81)
#define ERROR_PCW_MAJOR_UPGD_WITHOUT_SEQUENCING (ERROR_PCW_BASE + 0x82)
#define ERROR_PCW_BAD_PRODUCTVERSION_VALIDATION (ERROR_PCW_BASE + 0x83)
#define ERROR_PCW_BAD_TRANSFORMSET (ERROR_PCW_BASE + 0x84)
#define ERROR_PCW_BAD_TGT_UPD_IMAGES (ERROR_PCW_BASE + 0x85)
#define ERROR_PCW_BAD_SUPERCEDENCE (ERROR_PCW_BASE + 0x86)
#define ERROR_PCW_BAD_SEQUENCE (ERROR_PCW_BASE + 0x87)
#define ERROR_PCW_BAD_TARGET (ERROR_PCW_BASE + 0x88)
#define ERROR_PCW_NULL_PATCHFAMILY (ERROR_PCW_BASE + 0x89)
#define ERROR_PCW_NULL_SEQUENCE_NUMBER (ERROR_PCW_BASE + 0x8a)
#define ERROR_PCW_BAD_VERSION_STRING (ERROR_PCW_BASE + 0x8b)
#define ERROR_PCW_BAD_MAJOR_VERSION (ERROR_PCW_BASE + 0x8c)
#define ERROR_PCW_SEQUENCING_BAD_TARGET (ERROR_PCW_BASE + 0x8d)
#define ERROR_PCW_PATCHMETADATA_PROP_NOT_SET (ERROR_PCW_BASE + 0x8e)
#define ERROR_PCW_INVALID_PATCHMETADATA_PROP (ERROR_PCW_BASE + 0x8f)
#define ERROR_PCW_INVALID_SUPERCEDENCE (ERROR_PCW_BASE + 0x90)
#define ERROR_PCW_DUPLICATE_SEQUENCE_RECORD (ERROR_PCW_BASE + 0x91)
#define ERROR_PCW_WRONG_PATCHMETADATA_STRD_PROP (ERROR_PCW_BASE + 0x92)
#define ERROR_PCW_INVALID_PARAMETER (ERROR_PCW_BASE + 0x93)
#define ERROR_PCW_CREATEFILE_LOG_FAILED (ERROR_PCW_BASE + 0x94)
#define ERROR_PCW_INVALID_LOG_LEVEL (ERROR_PCW_BASE + 0x95)
#define ERROR_PCW_INVALID_UI_LEVEL (ERROR_PCW_BASE + 0x96)
#define ERROR_PCW_ERROR_WRITING_TO_LOG (ERROR_PCW_BASE + 0x97)
#define ERROR_PCW_OUT_OF_MEMORY (ERROR_PCW_BASE + 0x98)
#define ERROR_PCW_UNKNOWN_ERROR (ERROR_PCW_BASE + 0x99)
#define ERROR_PCW_UNKNOWN_INFO (ERROR_PCW_BASE + 0x9a)
#define ERROR_PCW_UNKNOWN_WARN (ERROR_PCW_BASE + 0x9b)
#define ERROR_PCW_OPEN_VIEW (ERROR_PCW_BASE + 0x9c)
#define ERROR_PCW_EXECUTE_VIEW (ERROR_PCW_BASE + 0x9d)
#define ERROR_PCW_VIEW_FETCH (ERROR_PCW_BASE + 0x9e)
#define ERROR_PCW_FAILED_EXPAND_PATH (ERROR_PCW_BASE + 0x9f)
#define ERROR_PCW_INTERNAL_ERROR (ERROR_PCW_BASE + 0x100)
#define ERROR_PCW_INVALID_PCP_PROPERTY (ERROR_PCW_BASE + 0x101)
#define ERROR_PCW_INVALID_PCP_TARGETIMAGES (ERROR_PCW_BASE + 0x102)
#define ERROR_PCW_LAX_VALIDATION_FLAGS (ERROR_PCW_BASE + 0x103)
#define ERROR_PCW_FAILED_CREATE_TRANSFORM (ERROR_PCW_BASE + 0x104)
#define ERROR_PCW_CANT_DELETE_TEMP_FOLDER (ERROR_PCW_BASE + 0x105)
#define ERROR_PCW_MISSING_DIRECTORY_TABLE (ERROR_PCW_BASE + 0x106)
#define ERROR_PCW_INVALID_SUPERSEDENCE_VALUE (ERROR_PCW_BASE + 0x107)
#define ERROR_PCW_INVALID_PATCH_TYPE_SEQUENCING (ERROR_PCW_BASE + 0x108)
#define ERROR_PCW_CANT_READ_FILE (ERROR_PCW_BASE + 0x109)
#define ERROR_PCW_TARGET_WRONG_PRODUCT_VERSION_COMP (ERROR_PCW_BASE + 0x10a)
#define ERROR_PCW_INVALID_PCP_UPGRADEDFILESTOIGNORE (ERROR_PCW_BASE + 0x10b)
#define ERROR_PCW_INVALID_PCP_UPGRADEDIMAGES (ERROR_PCW_BASE + 0x10c)
#define ERROR_PCW_INVALID_PCP_EXTERNALFILES (ERROR_PCW_BASE + 0x10d)
#define ERROR_PCW_INVALID_PCP_IMAGEFAMILIES (ERROR_PCW_BASE + 0x10e)
#define ERROR_PCW_INVALID_PCP_PATCHSEQUENCE (ERROR_PCW_BASE + 0x10f)
#define ERROR_PCW_INVALID_PCP_TARGETFILES_OPTIONALDATA (ERROR_PCW_BASE + 0x110)
#define ERROR_PCW_INVALID_PCP_UPGRADEDFILES_OPTIONALDATA (ERROR_PCW_BASE + 0x111)
#define ERROR_PCW_MISSING_PATCHMETADATA (ERROR_PCW_BASE + 0x112)
#define ERROR_PCW_IMAGE_PATH_NOT_EXIST (ERROR_PCW_BASE + 0x113)
#define ERROR_PCW_INVALID_RANGE_ELEMENT (ERROR_PCW_BASE + 0x114)
#define ERROR_PCW_INVALID_MAJOR_VERSION (ERROR_PCW_BASE + 0x115)
#define ERROR_PCW_INVALID_PCP_PROPERTIES (ERROR_PCW_BASE + 0x116)
#define ERROR_PCW_INVALID_PCP_FAMILYFILERANGES (ERROR_PCW_BASE + 0x117)

#define INFO_BASE 0xc00f5101
#define INFO_PASSED_MAIN_CONTROL (INFO_BASE + 0x00)
#define INFO_ENTERING_PHASE_I_VALIDATION (INFO_BASE + 0x01)
#define INFO_ENTERING_PHASE_I (INFO_BASE + 0x02)
#define INFO_PCP_PATH (INFO_BASE + 0x03)
#define INFO_TEMP_DIR (INFO_BASE + 0x04)
#define INFO_SET_OPTIONS (INFO_BASE + 0x05)
#define INFO_PROPERTY (INFO_BASE + 0x06)
#define INFO_ENTERING_PHASE_II (INFO_BASE + 0x07)
#define INFO_ENTERING_PHASE_III (INFO_BASE + 0x08)
#define INFO_ENTERING_PHASE_IV (INFO_BASE + 0x09)
#define INFO_ENTERING_PHASE_V (INFO_BASE + 0x0a)
#define INFO_GENERATING_METADATA (INFO_BASE + 0x10)
#define INFO_TEMP_DIR_CLEANUP (INFO_BASE + 0x11)
#define INFO_PATCHCACHE_FILEINFO_FAILURE (INFO_BASE + 0x12)
#define INFO_PATCHCACHE_PCI_READFAILURE (INFO_BASE + 0x13)
#define INFO_PATCHCACHE_PCI_WRITEFAILURE (INFO_BASE + 0x14)
#define INFO_USING_USER_MSI_FOR_PATCH_TABLES (INFO_BASE + 0x15)
#define INFO_SUCCESSFUL_PATCH_CREATION (INFO_BASE + 0x16)

#define WARN_BASE 0xc0105101
#define WARN_MAJOR_UPGRADE_PATCH (WARN_BASE + 0x00)
#define WARN_SEQUENCE_DATA_GENERATION_DISABLED (WARN_BASE + 0x01)
#define WARN_SEQUENCE_DATA_SUPERSEDENCE_IGNORED (WARN_BASE + 0x02)
#define WARN_IMPROPER_TRANSFORM_VALIDATION (WARN_BASE + 0x03)
#define WARN_PCW_MISMATCHED_PRODUCT_CODES (WARN_BASE + 0x04)
#define WARN_PCW_MISMATCHED_PRODUCT_VERSIONS (WARN_BASE + 0x05)
#define WARN_INVALID_TRANSFORM_VALIDATION (WARN_BASE + 0x06)
#define WARN_BAD_MAJOR_VERSION (WARN_BASE + 0x07)
#define WARN_FILE_VERSION_DOWNREV (WARN_BASE + 0x08)
#define WARN_EQUAL_FILE_VERSION (WARN_BASE + 0x09)
#define WARN_PATCHPROPERTYNOTSET (WARN_BASE + 0x0a)
#define WARN_OBSOLETION_WITH_SEQUENCE_DATA (WARN_BASE + 0x11)
#define WARN_OBSOLETION_WITH_MSI30 (WARN_BASE + 0x10)
#define WARN_OBSOLETION_WITH_PATCHSEQUENCE (WARN_BASE + 0x12)

#define UiCreatePatchPackage __MINGW_NAME_AW(UiCreatePatchPackage)
#define UiCreatePatchPackageEx __MINGW_NAME_AW(UiCreatePatchPackageEx)

#endif
#endif
