public class QueueUsingArray {
    int queue[] = new int[5];
    int size;
    int front;
    int rear;
    public void enqueue(int data)
    {
        queue[rear]= data;
        rear = rear+1;
        size = size+1;
    }
    public int dequeue()
    {
        int data = queue[front];
        front  =front + 1;
        size=size-1;
        return  data;
    }
    public void show()
    {

        System.out.println("Elements   :");
        for(int i=0;i<size;i++)
        {
            System.out.println(queue[front+i] + " ");
        }
    }

    public static void main(String[] args) {
        QueueUsingArray q = new QueueUsingArray();
        System.out.println("After performing Enqueue Operation");
        q.enqueue(5);
        q.enqueue(6);
        q.enqueue(3);
        q.enqueue(7);

        q.show();
        System.out.println("After performing Dequeue Operation");
        q.dequeue();
        q.dequeue();
        q.show();
    }
}
