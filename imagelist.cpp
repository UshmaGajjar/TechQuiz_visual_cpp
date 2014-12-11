// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "imagelist.h"

// Dispatch interfaces referenced by this interface
#include "Images.h"
#include "Picture.h"

/////////////////////////////////////////////////////////////////////////////
// CImageList1

IMPLEMENT_DYNCREATE(CImageList1, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CImageList1 properties

/////////////////////////////////////////////////////////////////////////////
// CImageList1 operations

short CImageList1::GetImageHeight()
{
	short result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CImageList1::SetImageHeight(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CImageList1::GetImageWidth()
{
	short result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CImageList1::SetImageWidth(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

unsigned long CImageList1::GetMaskColor()
{
	unsigned long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CImageList1::SetMaskColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL CImageList1::GetUseMaskColor()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CImageList1::SetUseMaskColor(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CImages CImageList1::GetListImages()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CImages(pDispatch);
}

void CImageList1::SetRefListImages(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

long CImageList1::GetHImageList()
{
	long result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CImageList1::SetHImageList(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

unsigned long CImageList1::GetBackColor()
{
	unsigned long result;
	InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CImageList1::SetBackColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CPicture CImageList1::Overlay(VARIANT* Key1, VARIANT* Key2)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		Key1, Key2);
	return CPicture(pDispatch);
}