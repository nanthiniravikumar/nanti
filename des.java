import com.ms.wfc.html.*;
import com.ms.wfc.core.*;
import com.ms.wfc.ui.*;
public class Class1 extends DhDocument
{
   public Class1()
   {
       initForm();
   }
   DhButton newElem = new DhButton();
   DhText existElem = new DhText();       
   private void initForm( )
   {
      newElem.setText("hello world");
      existElem.setBackColor(Color.BLUE);
      newElem.addOnClick(new EventHandler(this.onClickButton));
      existElem = new DhText();
      setNewElements(new Component[] { newElem });
      setBoundElements(new DhElement[]{ existElem.setBindID("Sample") });
   }
   private void onClickButton(Object sender, Event e) {
           existElem.setText("Hello, world");
   }
}
