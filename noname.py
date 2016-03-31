# -*- coding: utf-8 -*- 

###########################################################################
## Python code generated with wxFormBuilder (version Jun 17 2015)
## http://www.wxformbuilder.org/
##
## PLEASE DO "NOT" EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc

import gettext
_ = gettext.gettext

###########################################################################
## Class MyFrame1
###########################################################################

class MyFrame1 ( wx.Frame ):
	
	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = wx.EmptyString, pos = wx.DefaultPosition, size = wx.Size( 463,371 ), style = wx.DEFAULT_FRAME_STYLE|wx.TAB_TRAVERSAL )
		
		self.SetSizeHintsSz( wx.DefaultSize, wx.DefaultSize )
		
		bSizer1 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_scrolledWindow1 = wx.ScrolledWindow( self, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.HSCROLL|wx.VSCROLL )
		self.m_scrolledWindow1.SetScrollRate( 5, 5 )
		gbSizer1 = wx.GridBagSizer( 0, 0 )
		gbSizer1.SetFlexibleDirection( wx.BOTH )
		gbSizer1.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )
		
		m_radioBox2Choices = [ _(u"1378"), _(u"59"), _(u"246") ]
		self.m_radioBox2 = wx.RadioBox( self.m_scrolledWindow1, wx.ID_ANY, _(u"wxRadioBox"), wx.DefaultPosition, wx.DefaultSize, m_radioBox2Choices, 1, wx.RA_SPECIFY_COLS )
		self.m_radioBox2.SetSelection( 1 )
		gbSizer1.Add( self.m_radioBox2, wx.GBPosition( 6, 0 ), wx.GBSpan( 4, 1 ), wx.ALL, 5 )
		
		self.m_textCtrl1 = wx.TextCtrl( self.m_scrolledWindow1, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gbSizer1.Add( self.m_textCtrl1, wx.GBPosition( 0, 0 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )
		
		self.m_textCtrl2 = wx.TextCtrl( self.m_scrolledWindow1, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gbSizer1.Add( self.m_textCtrl2, wx.GBPosition( 1, 0 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )
		
		self.m_textCtrl3 = wx.TextCtrl( self.m_scrolledWindow1, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_textCtrl3.SetToolTipString( _(u"asd") )
		
		gbSizer1.Add( self.m_textCtrl3, wx.GBPosition( 2, 0 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )
		
		self.m_textCtrl4 = wx.TextCtrl( self.m_scrolledWindow1, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gbSizer1.Add( self.m_textCtrl4, wx.GBPosition( 3, 0 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )
		
		m_listBox1Choices = [ _(u"asd"), _(u"qwe"), _(u"zxc") ]
		self.m_listBox1 = wx.ListBox( self.m_scrolledWindow1, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, m_listBox1Choices, 0 )
		gbSizer1.Add( self.m_listBox1, wx.GBPosition( 0, 1 ), wx.GBSpan( 3, 1 ), wx.ALL|wx.EXPAND, 5 )
		
		m_comboBox1Choices = [ _(u"rty"), _(u"dfg"), _(u"cvb") ]
		self.m_comboBox1 = wx.ComboBox( self.m_scrolledWindow1, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, m_comboBox1Choices, 0 )
		gbSizer1.Add( self.m_comboBox1, wx.GBPosition( 0, 2 ), wx.GBSpan( 3, 1 ), wx.ALL, 5 )
		
		m_choice1Choices = [ _(u"uio"), _(u"jkl"), _(u"m,.") ]
		self.m_choice1 = wx.Choice( self.m_scrolledWindow1, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, m_choice1Choices, 0 )
		self.m_choice1.SetSelection( 0 )
		gbSizer1.Add( self.m_choice1, wx.GBPosition( 0, 3 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )
		
		self.m_staticline1 = wx.StaticLine( self.m_scrolledWindow1, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.LI_VERTICAL )
		gbSizer1.Add( self.m_staticline1, wx.GBPosition( 0, 4 ), wx.GBSpan( 4, 1 ), wx.EXPAND |wx.ALL, 5 )
		
		self.m_gauge1 = wx.Gauge( self.m_scrolledWindow1, wx.ID_ANY, 100, wx.DefaultPosition, wx.DefaultSize, wx.GA_HORIZONTAL )
		self.m_gauge1.SetValue( 35 ) 
		gbSizer1.Add( self.m_gauge1, wx.GBPosition( 3, 1 ), wx.GBSpan( 1, 3 ), wx.ALL|wx.EXPAND, 5 )
		
		self.m_bpButton1 = wx.BitmapButton( self.m_scrolledWindow1, wx.ID_ANY, wx.Bitmap( u"flag.bmp", wx.BITMAP_TYPE_ANY ), wx.DefaultPosition, wx.DefaultSize, wx.BU_AUTODRAW )
		gbSizer1.Add( self.m_bpButton1, wx.GBPosition( 0, 5 ), wx.GBSpan( 2, 1 ), wx.ALL, 5 )
		
		self.m_bpButton2 = wx.BitmapButton( self.m_scrolledWindow1, wx.ID_ANY, wx.Bitmap( u"explode1.bmp", wx.BITMAP_TYPE_ANY ), wx.DefaultPosition, wx.DefaultSize, wx.BU_AUTODRAW )
		gbSizer1.Add( self.m_bpButton2, wx.GBPosition( 2, 5 ), wx.GBSpan( 2, 1 ), wx.ALL, 5 )
		
		self.m_staticline2 = wx.StaticLine( self.m_scrolledWindow1, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.LI_HORIZONTAL )
		gbSizer1.Add( self.m_staticline2, wx.GBPosition( 5, 0 ), wx.GBSpan( 1, 6 ), wx.EXPAND |wx.ALL, 5 )
		
		self.m_checkBox1 = wx.CheckBox( self.m_scrolledWindow1, wx.ID_ANY, _(u"Check Me!"), wx.DefaultPosition, wx.DefaultSize, 0 )
		gbSizer1.Add( self.m_checkBox1, wx.GBPosition( 6, 1 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )
		
		self.m_checkBox2 = wx.CheckBox( self.m_scrolledWindow1, wx.ID_ANY, _(u"Check Me!"), wx.DefaultPosition, wx.DefaultSize, 0 )
		gbSizer1.Add( self.m_checkBox2, wx.GBPosition( 7, 1 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )
		
		self.m_checkBox3 = wx.CheckBox( self.m_scrolledWindow1, wx.ID_ANY, _(u"Check Me!"), wx.DefaultPosition, wx.DefaultSize, 0 )
		gbSizer1.Add( self.m_checkBox3, wx.GBPosition( 8, 1 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )
		
		self.m_checkBox4 = wx.CheckBox( self.m_scrolledWindow1, wx.ID_ANY, _(u"Check Me!"), wx.DefaultPosition, wx.DefaultSize, 0 )
		gbSizer1.Add( self.m_checkBox4, wx.GBPosition( 9, 1 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )
		
		
		self.m_scrolledWindow1.SetSizer( gbSizer1 )
		self.m_scrolledWindow1.Layout()
		gbSizer1.Fit( self.m_scrolledWindow1 )
		bSizer1.Add( self.m_scrolledWindow1, 1, wx.EXPAND |wx.ALL, 5 )
		
		
		self.SetSizer( bSizer1 )
		self.Layout()
		
		self.Centre( wx.BOTH )
	
	def __del__( self ):
		pass
	

