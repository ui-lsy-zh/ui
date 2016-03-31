import noname
import wx
class use_Frame ( noname.MyFrame1 ):
	def __init__( self, parent ):
		noname.MyFrame1.__init__ ( self, parent)
		self.m_bpButton2.Bind( wx.EVT_BUTTON, self.m_bpButton2_OnClick)
		self.m_bpButton1.Bind( wx.EVT_BUTTON, self.m_bpButton1_OnClick)
	def __del__( self ):
		pass
	def m_bpButton2_OnClick( self, event ):
		self.m_gauge1.SetValue( self.m_gauge1.GetValue()+10 )
		event.Skip()
	def m_bpButton1_OnClick( self, event ):
		self.m_gauge1.SetValue( self.m_gauge1.GetValue()-10 )
		event.Skip()

app = wx.App(False)
frame = use_Frame(None)
frame.Show(True)
app.MainLoop()
